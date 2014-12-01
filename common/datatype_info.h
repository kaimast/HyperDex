// Copyright (c) 2013, Cornell University
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are met:
//
//     * Redistributions of source code must retain the above copyright notice,
//       this list of conditions and the following disclaimer.
//     * Redistributions in binary form must reproduce the above copyright
//       notice, this list of conditions and the following disclaimer in the
//       documentation and/or other materials provided with the distribution.
//     * Neither the name of HyperDex nor the names of its contributors may be
//       used to endorse or promote products derived from this software without
//       specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
// AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
// ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
// LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
// CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
// SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
// INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
// CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
// ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
// POSSIBILITY OF SUCH DAMAGE.

#ifndef hyperdex_common_datatypes_h_
#define hyperdex_common_datatypes_h_

// e
#include <e/slice.h>

// HyperDex
#include "namespace.h"
#include "hyperdex.h"
#include "common/attribute_check.h"
#include "common/funcall.h"
#include "common/ids.h"

BEGIN_HYPERDEX_NAMESPACE

class key_change;

class datatype_info
{
    public:
        // Return a pointer to the datatype_info representing the specific datatyp
        // Must not be deleted
        static datatype_info* lookup(hyperdatatype datatype);

    public:
        datatype_info();
        virtual ~datatype_info() throw ();

    // all types must implement these
    public:
        virtual hyperdatatype datatype() const = 0;
        virtual bool validate(const e::slice& value) const = 0;
        virtual bool check_args(const funcall& func) const = 0;
        virtual uint8_t* apply(const e::slice& old_value,
                               const funcall* funcs, size_t funcs_sz,
                               uint8_t* writeto) = 0;

    // override these if the type is hashable
    public:
        virtual bool hashable() const;
        virtual uint64_t hash(const e::slice& value);

    // override these if the type is indexable
    public:
        virtual bool indexable() const;

    // override these if the type has a "length"
    public:
        virtual bool has_length() const;
        virtual uint64_t length(const e::slice& value);

    // override these if the type can be matched with regexes
    public:
        virtual bool has_regex() const;
        virtual bool regex(const e::slice& regex,
                           const e::slice& value);

    // override these if the type can be matched with "contains"
    public:
        virtual bool has_contains() const;
        virtual hyperdatatype contains_datatype() const;
        virtual bool contains(const e::slice& value, const e::slice& needle);

    // override these if the type will be used within containers
    public:
        virtual bool containable() const;
        virtual bool step(const uint8_t** ptr,
                          const uint8_t* end,
                          e::slice* elem);
        // must handle the case where elem/writeto overlap
        virtual uint8_t* write(uint8_t* writeto,
                               const e::slice& elem);

    // override these if the type has requirements on the old value for certain operations
    public:
        virtual bool validate_old_values(const std::vector<e::slice>& old_values, const funcall& func) const;

    // override these if the type can be compared
    public:
        virtual bool comparable() const;
        virtual int compare(const e::slice& lhs, const e::slice& rhs) const;
        typedef bool (*compares_less)(const e::slice& lhs, const e::slice& rhs);
        virtual compares_less compare_less();

    // override these if the type can be variable/document-like
    //
    // Custom document-like types cannot use the above comparables because they
    // don't fit our long-held assumptions about different datatypes.
    // Rather than break those assumptions and chase bugs, introduce a
    // document_check call that converts the document check into something sane,
    // possibly a non-document type.  It's easy to create a sample value/check
    // and pass that to the attribute checks instead.
    public:
        virtual bool document() const;
        virtual bool document_check(const attribute_check& check,
                                    const e::slice& value);
};

// Is it a float or integer?
inline bool is_type_numeric(const hyperdatatype type)
{
    return type == HYPERDATATYPE_FLOAT || type == HYPERDATATYPE_INT64;
}

// Is it a numeric or string type?
inline bool is_type_primitive(const hyperdatatype type)
{
    return is_type_numeric(type) || type == HYPERDATATYPE_STRING;
}

END_HYPERDEX_NAMESPACE

#endif // hyperdex_common_datatypes_h_
