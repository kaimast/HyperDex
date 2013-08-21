/* Copyright (c) 2013, Cornell University
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 *     * Redistributions of source code must retain the above copyright notice,
 *       this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above copyright
 *       notice, this list of conditions and the following disclaimer in the
 *       documentation and/or other materials provided with the distribution.
 *     * Neither the name of HyperDex nor the names of its contributors may be
 *       used to endorse or promote products derived from this software without
 *       specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

/* GENERATED!  Do not modify this file directly */

static VALUE
_hyperdex_ruby_client_asynccall__spacename_key__status_attributes(int64_t (*f)(struct hyperdex_client* client, const char* space, const char* key, size_t key_sz, enum hyperdex_client_returncode* status, const struct hyperdex_client_attribute** attrs, size_t* attrs_sz), VALUE self, VALUE spacename, VALUE key)
{
    VALUE dfrd;
    const char* in_space;
    const char* in_key;
    size_t in_key_sz;
    struct hyperdex_client* client;
    struct hyperdex_ruby_client_deferred* d;
    dfrd = rb_class_new_instance(1, &self, class_deferred);
    rb_iv_set(self, "tmp", dfrd);
    Data_Get_Struct(self, struct hyperdex_client, client);
    Data_Get_Struct(dfrd, struct hyperdex_ruby_client_deferred, d);
    hyperdex_ruby_client_convert_spacename(d->arena, spacename, &in_space);
    hyperdex_ruby_client_convert_key(d->arena, key, &in_key, &in_key_sz);
    d->reqid = f(client, in_space, in_key, in_key_sz, &d->status, &d->attrs, &d->attrs_sz);

    if (d->reqid < 0)
    {
        hyperdex_ruby_client_throw_exception(d->status, hyperdex_client_error_message(client));
    }

    d->encode_return = hyperdex_ruby_client_deferred_encode_status_attributes;
    rb_hash_aset(rb_iv_get(self, "ops"), LONG2NUM(d->reqid), dfrd);
    rb_iv_set(self, "tmp", Qnil);
    return dfrd;
}

static VALUE
_hyperdex_ruby_client_asynccall__spacename_key_attributes__status(int64_t (*f)(struct hyperdex_client* client, const char* space, const char* key, size_t key_sz, const struct hyperdex_client_attribute* attrs, size_t attrs_sz, enum hyperdex_client_returncode* status), VALUE self, VALUE spacename, VALUE key, VALUE attributes)
{
    VALUE dfrd;
    const char* in_space;
    const char* in_key;
    size_t in_key_sz;
    const struct hyperdex_client_attribute* in_attrs;
    size_t in_attrs_sz;
    struct hyperdex_client* client;
    struct hyperdex_ruby_client_deferred* d;
    dfrd = rb_class_new_instance(1, &self, class_deferred);
    rb_iv_set(self, "tmp", dfrd);
    Data_Get_Struct(self, struct hyperdex_client, client);
    Data_Get_Struct(dfrd, struct hyperdex_ruby_client_deferred, d);
    hyperdex_ruby_client_convert_spacename(d->arena, spacename, &in_space);
    hyperdex_ruby_client_convert_key(d->arena, key, &in_key, &in_key_sz);
    hyperdex_ruby_client_convert_attributes(d->arena, attributes, &in_attrs, &in_attrs_sz);
    d->reqid = f(client, in_space, in_key, in_key_sz, in_attrs, in_attrs_sz, &d->status);

    if (d->reqid < 0)
    {
        hyperdex_ruby_client_throw_exception(d->status, hyperdex_client_error_message(client));
    }

    d->encode_return = hyperdex_ruby_client_deferred_encode_status;
    rb_hash_aset(rb_iv_get(self, "ops"), LONG2NUM(d->reqid), dfrd);
    rb_iv_set(self, "tmp", Qnil);
    return dfrd;
}

static VALUE
_hyperdex_ruby_client_asynccall__spacename_key_predicates_attributes__status(int64_t (*f)(struct hyperdex_client* client, const char* space, const char* key, size_t key_sz, const struct hyperdex_client_attribute_check* checks, size_t checks_sz, const struct hyperdex_client_attribute* attrs, size_t attrs_sz, enum hyperdex_client_returncode* status), VALUE self, VALUE spacename, VALUE key, VALUE predicates, VALUE attributes)
{
    VALUE dfrd;
    const char* in_space;
    const char* in_key;
    size_t in_key_sz;
    const struct hyperdex_client_attribute_check* in_checks;
    size_t in_checks_sz;
    const struct hyperdex_client_attribute* in_attrs;
    size_t in_attrs_sz;
    struct hyperdex_client* client;
    struct hyperdex_ruby_client_deferred* d;
    dfrd = rb_class_new_instance(1, &self, class_deferred);
    rb_iv_set(self, "tmp", dfrd);
    Data_Get_Struct(self, struct hyperdex_client, client);
    Data_Get_Struct(dfrd, struct hyperdex_ruby_client_deferred, d);
    hyperdex_ruby_client_convert_spacename(d->arena, spacename, &in_space);
    hyperdex_ruby_client_convert_key(d->arena, key, &in_key, &in_key_sz);
    hyperdex_ruby_client_convert_predicates(d->arena, predicates, &in_checks, &in_checks_sz);
    hyperdex_ruby_client_convert_attributes(d->arena, attributes, &in_attrs, &in_attrs_sz);
    d->reqid = f(client, in_space, in_key, in_key_sz, in_checks, in_checks_sz, in_attrs, in_attrs_sz, &d->status);

    if (d->reqid < 0)
    {
        hyperdex_ruby_client_throw_exception(d->status, hyperdex_client_error_message(client));
    }

    d->encode_return = hyperdex_ruby_client_deferred_encode_status;
    rb_hash_aset(rb_iv_get(self, "ops"), LONG2NUM(d->reqid), dfrd);
    rb_iv_set(self, "tmp", Qnil);
    return dfrd;
}

static VALUE
_hyperdex_ruby_client_asynccall__spacename_key__status(int64_t (*f)(struct hyperdex_client* client, const char* space, const char* key, size_t key_sz, enum hyperdex_client_returncode* status), VALUE self, VALUE spacename, VALUE key)
{
    VALUE dfrd;
    const char* in_space;
    const char* in_key;
    size_t in_key_sz;
    struct hyperdex_client* client;
    struct hyperdex_ruby_client_deferred* d;
    dfrd = rb_class_new_instance(1, &self, class_deferred);
    rb_iv_set(self, "tmp", dfrd);
    Data_Get_Struct(self, struct hyperdex_client, client);
    Data_Get_Struct(dfrd, struct hyperdex_ruby_client_deferred, d);
    hyperdex_ruby_client_convert_spacename(d->arena, spacename, &in_space);
    hyperdex_ruby_client_convert_key(d->arena, key, &in_key, &in_key_sz);
    d->reqid = f(client, in_space, in_key, in_key_sz, &d->status);

    if (d->reqid < 0)
    {
        hyperdex_ruby_client_throw_exception(d->status, hyperdex_client_error_message(client));
    }

    d->encode_return = hyperdex_ruby_client_deferred_encode_status;
    rb_hash_aset(rb_iv_get(self, "ops"), LONG2NUM(d->reqid), dfrd);
    rb_iv_set(self, "tmp", Qnil);
    return dfrd;
}

static VALUE
_hyperdex_ruby_client_asynccall__spacename_key_predicates__status(int64_t (*f)(struct hyperdex_client* client, const char* space, const char* key, size_t key_sz, const struct hyperdex_client_attribute_check* checks, size_t checks_sz, enum hyperdex_client_returncode* status), VALUE self, VALUE spacename, VALUE key, VALUE predicates)
{
    VALUE dfrd;
    const char* in_space;
    const char* in_key;
    size_t in_key_sz;
    const struct hyperdex_client_attribute_check* in_checks;
    size_t in_checks_sz;
    struct hyperdex_client* client;
    struct hyperdex_ruby_client_deferred* d;
    dfrd = rb_class_new_instance(1, &self, class_deferred);
    rb_iv_set(self, "tmp", dfrd);
    Data_Get_Struct(self, struct hyperdex_client, client);
    Data_Get_Struct(dfrd, struct hyperdex_ruby_client_deferred, d);
    hyperdex_ruby_client_convert_spacename(d->arena, spacename, &in_space);
    hyperdex_ruby_client_convert_key(d->arena, key, &in_key, &in_key_sz);
    hyperdex_ruby_client_convert_predicates(d->arena, predicates, &in_checks, &in_checks_sz);
    d->reqid = f(client, in_space, in_key, in_key_sz, in_checks, in_checks_sz, &d->status);

    if (d->reqid < 0)
    {
        hyperdex_ruby_client_throw_exception(d->status, hyperdex_client_error_message(client));
    }

    d->encode_return = hyperdex_ruby_client_deferred_encode_status;
    rb_hash_aset(rb_iv_get(self, "ops"), LONG2NUM(d->reqid), dfrd);
    rb_iv_set(self, "tmp", Qnil);
    return dfrd;
}

static VALUE
_hyperdex_ruby_client_asynccall__spacename_key_mapattributes__status(int64_t (*f)(struct hyperdex_client* client, const char* space, const char* key, size_t key_sz, const struct hyperdex_client_map_attribute* mapattrs, size_t mapattrs_sz, enum hyperdex_client_returncode* status), VALUE self, VALUE spacename, VALUE key, VALUE mapattributes)
{
    VALUE dfrd;
    const char* in_space;
    const char* in_key;
    size_t in_key_sz;
    const struct hyperdex_client_map_attribute* in_mapattrs;
    size_t in_mapattrs_sz;
    struct hyperdex_client* client;
    struct hyperdex_ruby_client_deferred* d;
    dfrd = rb_class_new_instance(1, &self, class_deferred);
    rb_iv_set(self, "tmp", dfrd);
    Data_Get_Struct(self, struct hyperdex_client, client);
    Data_Get_Struct(dfrd, struct hyperdex_ruby_client_deferred, d);
    hyperdex_ruby_client_convert_spacename(d->arena, spacename, &in_space);
    hyperdex_ruby_client_convert_key(d->arena, key, &in_key, &in_key_sz);
    hyperdex_ruby_client_convert_mapattributes(d->arena, mapattributes, &in_mapattrs, &in_mapattrs_sz);
    d->reqid = f(client, in_space, in_key, in_key_sz, in_mapattrs, in_mapattrs_sz, &d->status);

    if (d->reqid < 0)
    {
        hyperdex_ruby_client_throw_exception(d->status, hyperdex_client_error_message(client));
    }

    d->encode_return = hyperdex_ruby_client_deferred_encode_status;
    rb_hash_aset(rb_iv_get(self, "ops"), LONG2NUM(d->reqid), dfrd);
    rb_iv_set(self, "tmp", Qnil);
    return dfrd;
}

static VALUE
_hyperdex_ruby_client_asynccall__spacename_key_predicates_mapattributes__status(int64_t (*f)(struct hyperdex_client* client, const char* space, const char* key, size_t key_sz, const struct hyperdex_client_attribute_check* checks, size_t checks_sz, const struct hyperdex_client_map_attribute* mapattrs, size_t mapattrs_sz, enum hyperdex_client_returncode* status), VALUE self, VALUE spacename, VALUE key, VALUE predicates, VALUE mapattributes)
{
    VALUE dfrd;
    const char* in_space;
    const char* in_key;
    size_t in_key_sz;
    const struct hyperdex_client_attribute_check* in_checks;
    size_t in_checks_sz;
    const struct hyperdex_client_map_attribute* in_mapattrs;
    size_t in_mapattrs_sz;
    struct hyperdex_client* client;
    struct hyperdex_ruby_client_deferred* d;
    dfrd = rb_class_new_instance(1, &self, class_deferred);
    rb_iv_set(self, "tmp", dfrd);
    Data_Get_Struct(self, struct hyperdex_client, client);
    Data_Get_Struct(dfrd, struct hyperdex_ruby_client_deferred, d);
    hyperdex_ruby_client_convert_spacename(d->arena, spacename, &in_space);
    hyperdex_ruby_client_convert_key(d->arena, key, &in_key, &in_key_sz);
    hyperdex_ruby_client_convert_predicates(d->arena, predicates, &in_checks, &in_checks_sz);
    hyperdex_ruby_client_convert_mapattributes(d->arena, mapattributes, &in_mapattrs, &in_mapattrs_sz);
    d->reqid = f(client, in_space, in_key, in_key_sz, in_checks, in_checks_sz, in_mapattrs, in_mapattrs_sz, &d->status);

    if (d->reqid < 0)
    {
        hyperdex_ruby_client_throw_exception(d->status, hyperdex_client_error_message(client));
    }

    d->encode_return = hyperdex_ruby_client_deferred_encode_status;
    rb_hash_aset(rb_iv_get(self, "ops"), LONG2NUM(d->reqid), dfrd);
    rb_iv_set(self, "tmp", Qnil);
    return dfrd;
}

static VALUE
_hyperdex_ruby_client_iterator__spacename_predicates__status_attributes(int64_t (*f)(struct hyperdex_client* client, const char* space, const struct hyperdex_client_attribute_check* checks, size_t checks_sz, enum hyperdex_client_returncode* status, const struct hyperdex_client_attribute** attrs, size_t* attrs_sz), VALUE self, VALUE spacename, VALUE predicates)
{
    VALUE iter;
    const char* in_space;
    const struct hyperdex_client_attribute_check* in_checks;
    size_t in_checks_sz;
    struct hyperdex_client* client;
    struct hyperdex_ruby_client_iterator* it;
    iter = rb_class_new_instance(1, &self, class_iterator);
    rb_iv_set(self, "tmp", iter);
    Data_Get_Struct(self, struct hyperdex_client, client);
    Data_Get_Struct(iter, struct hyperdex_ruby_client_iterator, it);
    hyperdex_ruby_client_convert_spacename(it->arena, spacename, &in_space);
    hyperdex_ruby_client_convert_predicates(it->arena, predicates, &in_checks, &in_checks_sz);
    it->reqid = f(client, in_space, in_checks, in_checks_sz, &it->status, &it->attrs, &it->attrs_sz);

    if (it->reqid < 0)
    {
        hyperdex_ruby_client_throw_exception(it->status, hyperdex_client_error_message(client));
    }

    it->encode_return = hyperdex_ruby_client_iterator_encode_status_attributes;
    rb_hash_aset(rb_iv_get(self, "ops"), LONG2NUM(it->reqid), iter);
    rb_iv_set(self, "tmp", Qnil);
    return iter;
}

static VALUE
_hyperdex_ruby_client_asynccall__spacename_predicates__status_description(int64_t (*f)(struct hyperdex_client* client, const char* space, const struct hyperdex_client_attribute_check* checks, size_t checks_sz, enum hyperdex_client_returncode* status, const char** description), VALUE self, VALUE spacename, VALUE predicates)
{
    VALUE dfrd;
    const char* in_space;
    const struct hyperdex_client_attribute_check* in_checks;
    size_t in_checks_sz;
    struct hyperdex_client* client;
    struct hyperdex_ruby_client_deferred* d;
    dfrd = rb_class_new_instance(1, &self, class_deferred);
    rb_iv_set(self, "tmp", dfrd);
    Data_Get_Struct(self, struct hyperdex_client, client);
    Data_Get_Struct(dfrd, struct hyperdex_ruby_client_deferred, d);
    hyperdex_ruby_client_convert_spacename(d->arena, spacename, &in_space);
    hyperdex_ruby_client_convert_predicates(d->arena, predicates, &in_checks, &in_checks_sz);
    d->reqid = f(client, in_space, in_checks, in_checks_sz, &d->status, &d->description);

    if (d->reqid < 0)
    {
        hyperdex_ruby_client_throw_exception(d->status, hyperdex_client_error_message(client));
    }

    d->encode_return = hyperdex_ruby_client_deferred_encode_status_description;
    rb_hash_aset(rb_iv_get(self, "ops"), LONG2NUM(d->reqid), dfrd);
    rb_iv_set(self, "tmp", Qnil);
    return dfrd;
}

static VALUE
_hyperdex_ruby_client_iterator__spacename_predicates_sortby_limit_maxmin__status_attributes(int64_t (*f)(struct hyperdex_client* client, const char* space, const struct hyperdex_client_attribute_check* checks, size_t checks_sz, const char* sort_by, uint64_t limit, int maxmin, enum hyperdex_client_returncode* status, const struct hyperdex_client_attribute** attrs, size_t* attrs_sz), VALUE self, VALUE spacename, VALUE predicates, VALUE sortby, VALUE limit, VALUE maxmin)
{
    VALUE iter;
    const char* in_space;
    const struct hyperdex_client_attribute_check* in_checks;
    size_t in_checks_sz;
    const char* in_sort_by;
    uint64_t in_limit;
    int in_maxmin;
    struct hyperdex_client* client;
    struct hyperdex_ruby_client_iterator* it;
    iter = rb_class_new_instance(1, &self, class_iterator);
    rb_iv_set(self, "tmp", iter);
    Data_Get_Struct(self, struct hyperdex_client, client);
    Data_Get_Struct(iter, struct hyperdex_ruby_client_iterator, it);
    hyperdex_ruby_client_convert_spacename(it->arena, spacename, &in_space);
    hyperdex_ruby_client_convert_predicates(it->arena, predicates, &in_checks, &in_checks_sz);
    hyperdex_ruby_client_convert_sortby(it->arena, sortby, &in_sort_by);
    hyperdex_ruby_client_convert_limit(it->arena, limit, &in_limit);
    hyperdex_ruby_client_convert_maxmin(it->arena, maxmin, &in_maxmin);
    it->reqid = f(client, in_space, in_checks, in_checks_sz, in_sort_by, in_limit, in_maxmin, &it->status, &it->attrs, &it->attrs_sz);

    if (it->reqid < 0)
    {
        hyperdex_ruby_client_throw_exception(it->status, hyperdex_client_error_message(client));
    }

    it->encode_return = hyperdex_ruby_client_iterator_encode_status_attributes;
    rb_hash_aset(rb_iv_get(self, "ops"), LONG2NUM(it->reqid), iter);
    rb_iv_set(self, "tmp", Qnil);
    return iter;
}

static VALUE
_hyperdex_ruby_client_asynccall__spacename_predicates__status(int64_t (*f)(struct hyperdex_client* client, const char* space, const struct hyperdex_client_attribute_check* checks, size_t checks_sz, enum hyperdex_client_returncode* status), VALUE self, VALUE spacename, VALUE predicates)
{
    VALUE dfrd;
    const char* in_space;
    const struct hyperdex_client_attribute_check* in_checks;
    size_t in_checks_sz;
    struct hyperdex_client* client;
    struct hyperdex_ruby_client_deferred* d;
    dfrd = rb_class_new_instance(1, &self, class_deferred);
    rb_iv_set(self, "tmp", dfrd);
    Data_Get_Struct(self, struct hyperdex_client, client);
    Data_Get_Struct(dfrd, struct hyperdex_ruby_client_deferred, d);
    hyperdex_ruby_client_convert_spacename(d->arena, spacename, &in_space);
    hyperdex_ruby_client_convert_predicates(d->arena, predicates, &in_checks, &in_checks_sz);
    d->reqid = f(client, in_space, in_checks, in_checks_sz, &d->status);

    if (d->reqid < 0)
    {
        hyperdex_ruby_client_throw_exception(d->status, hyperdex_client_error_message(client));
    }

    d->encode_return = hyperdex_ruby_client_deferred_encode_status;
    rb_hash_aset(rb_iv_get(self, "ops"), LONG2NUM(d->reqid), dfrd);
    rb_iv_set(self, "tmp", Qnil);
    return dfrd;
}

static VALUE
_hyperdex_ruby_client_asynccall__spacename_predicates__status_count(int64_t (*f)(struct hyperdex_client* client, const char* space, const struct hyperdex_client_attribute_check* checks, size_t checks_sz, enum hyperdex_client_returncode* status, uint64_t* count), VALUE self, VALUE spacename, VALUE predicates)
{
    VALUE dfrd;
    const char* in_space;
    const struct hyperdex_client_attribute_check* in_checks;
    size_t in_checks_sz;
    struct hyperdex_client* client;
    struct hyperdex_ruby_client_deferred* d;
    dfrd = rb_class_new_instance(1, &self, class_deferred);
    rb_iv_set(self, "tmp", dfrd);
    Data_Get_Struct(self, struct hyperdex_client, client);
    Data_Get_Struct(dfrd, struct hyperdex_ruby_client_deferred, d);
    hyperdex_ruby_client_convert_spacename(d->arena, spacename, &in_space);
    hyperdex_ruby_client_convert_predicates(d->arena, predicates, &in_checks, &in_checks_sz);
    d->reqid = f(client, in_space, in_checks, in_checks_sz, &d->status, &d->count);

    if (d->reqid < 0)
    {
        hyperdex_ruby_client_throw_exception(d->status, hyperdex_client_error_message(client));
    }

    d->encode_return = hyperdex_ruby_client_deferred_encode_status_count;
    rb_hash_aset(rb_iv_get(self, "ops"), LONG2NUM(d->reqid), dfrd);
    rb_iv_set(self, "tmp", Qnil);
    return dfrd;
}


static VALUE
hyperdex_ruby_client_get(VALUE self, VALUE spacename, VALUE key)
{
    return _hyperdex_ruby_client_asynccall__spacename_key__status_attributes(hyperdex_client_get, self, spacename, key);
}
VALUE
hyperdex_ruby_client_wait_get(VALUE self, VALUE spacename, VALUE key)
{
    VALUE deferred = hyperdex_ruby_client_get(self, spacename, key);
    return rb_funcall(deferred, rb_intern("wait"), 0);
}

static VALUE
hyperdex_ruby_client_put(VALUE self, VALUE spacename, VALUE key, VALUE attributes)
{
    return _hyperdex_ruby_client_asynccall__spacename_key_attributes__status(hyperdex_client_put, self, spacename, key, attributes);
}
VALUE
hyperdex_ruby_client_wait_put(VALUE self, VALUE spacename, VALUE key, VALUE attributes)
{
    VALUE deferred = hyperdex_ruby_client_put(self, spacename, key, attributes);
    return rb_funcall(deferred, rb_intern("wait"), 0);
}

static VALUE
hyperdex_ruby_client_cond_put(VALUE self, VALUE spacename, VALUE key, VALUE predicates, VALUE attributes)
{
    return _hyperdex_ruby_client_asynccall__spacename_key_predicates_attributes__status(hyperdex_client_cond_put, self, spacename, key, predicates, attributes);
}
VALUE
hyperdex_ruby_client_wait_cond_put(VALUE self, VALUE spacename, VALUE key, VALUE predicates, VALUE attributes)
{
    VALUE deferred = hyperdex_ruby_client_cond_put(self, spacename, key, predicates, attributes);
    return rb_funcall(deferred, rb_intern("wait"), 0);
}

static VALUE
hyperdex_ruby_client_put_if_not_exist(VALUE self, VALUE spacename, VALUE key, VALUE attributes)
{
    return _hyperdex_ruby_client_asynccall__spacename_key_attributes__status(hyperdex_client_put_if_not_exist, self, spacename, key, attributes);
}
VALUE
hyperdex_ruby_client_wait_put_if_not_exist(VALUE self, VALUE spacename, VALUE key, VALUE attributes)
{
    VALUE deferred = hyperdex_ruby_client_put_if_not_exist(self, spacename, key, attributes);
    return rb_funcall(deferred, rb_intern("wait"), 0);
}

static VALUE
hyperdex_ruby_client_del(VALUE self, VALUE spacename, VALUE key)
{
    return _hyperdex_ruby_client_asynccall__spacename_key__status(hyperdex_client_del, self, spacename, key);
}
VALUE
hyperdex_ruby_client_wait_del(VALUE self, VALUE spacename, VALUE key)
{
    VALUE deferred = hyperdex_ruby_client_del(self, spacename, key);
    return rb_funcall(deferred, rb_intern("wait"), 0);
}

static VALUE
hyperdex_ruby_client_cond_del(VALUE self, VALUE spacename, VALUE key, VALUE predicates)
{
    return _hyperdex_ruby_client_asynccall__spacename_key_predicates__status(hyperdex_client_cond_del, self, spacename, key, predicates);
}
VALUE
hyperdex_ruby_client_wait_cond_del(VALUE self, VALUE spacename, VALUE key, VALUE predicates)
{
    VALUE deferred = hyperdex_ruby_client_cond_del(self, spacename, key, predicates);
    return rb_funcall(deferred, rb_intern("wait"), 0);
}

static VALUE
hyperdex_ruby_client_atomic_add(VALUE self, VALUE spacename, VALUE key, VALUE attributes)
{
    return _hyperdex_ruby_client_asynccall__spacename_key_attributes__status(hyperdex_client_atomic_add, self, spacename, key, attributes);
}
VALUE
hyperdex_ruby_client_wait_atomic_add(VALUE self, VALUE spacename, VALUE key, VALUE attributes)
{
    VALUE deferred = hyperdex_ruby_client_atomic_add(self, spacename, key, attributes);
    return rb_funcall(deferred, rb_intern("wait"), 0);
}

static VALUE
hyperdex_ruby_client_cond_atomic_add(VALUE self, VALUE spacename, VALUE key, VALUE predicates, VALUE attributes)
{
    return _hyperdex_ruby_client_asynccall__spacename_key_predicates_attributes__status(hyperdex_client_cond_atomic_add, self, spacename, key, predicates, attributes);
}
VALUE
hyperdex_ruby_client_wait_cond_atomic_add(VALUE self, VALUE spacename, VALUE key, VALUE predicates, VALUE attributes)
{
    VALUE deferred = hyperdex_ruby_client_cond_atomic_add(self, spacename, key, predicates, attributes);
    return rb_funcall(deferred, rb_intern("wait"), 0);
}

static VALUE
hyperdex_ruby_client_atomic_sub(VALUE self, VALUE spacename, VALUE key, VALUE attributes)
{
    return _hyperdex_ruby_client_asynccall__spacename_key_attributes__status(hyperdex_client_atomic_sub, self, spacename, key, attributes);
}
VALUE
hyperdex_ruby_client_wait_atomic_sub(VALUE self, VALUE spacename, VALUE key, VALUE attributes)
{
    VALUE deferred = hyperdex_ruby_client_atomic_sub(self, spacename, key, attributes);
    return rb_funcall(deferred, rb_intern("wait"), 0);
}

static VALUE
hyperdex_ruby_client_cond_atomic_sub(VALUE self, VALUE spacename, VALUE key, VALUE predicates, VALUE attributes)
{
    return _hyperdex_ruby_client_asynccall__spacename_key_predicates_attributes__status(hyperdex_client_cond_atomic_sub, self, spacename, key, predicates, attributes);
}
VALUE
hyperdex_ruby_client_wait_cond_atomic_sub(VALUE self, VALUE spacename, VALUE key, VALUE predicates, VALUE attributes)
{
    VALUE deferred = hyperdex_ruby_client_cond_atomic_sub(self, spacename, key, predicates, attributes);
    return rb_funcall(deferred, rb_intern("wait"), 0);
}

static VALUE
hyperdex_ruby_client_atomic_mul(VALUE self, VALUE spacename, VALUE key, VALUE attributes)
{
    return _hyperdex_ruby_client_asynccall__spacename_key_attributes__status(hyperdex_client_atomic_mul, self, spacename, key, attributes);
}
VALUE
hyperdex_ruby_client_wait_atomic_mul(VALUE self, VALUE spacename, VALUE key, VALUE attributes)
{
    VALUE deferred = hyperdex_ruby_client_atomic_mul(self, spacename, key, attributes);
    return rb_funcall(deferred, rb_intern("wait"), 0);
}

static VALUE
hyperdex_ruby_client_cond_atomic_mul(VALUE self, VALUE spacename, VALUE key, VALUE predicates, VALUE attributes)
{
    return _hyperdex_ruby_client_asynccall__spacename_key_predicates_attributes__status(hyperdex_client_cond_atomic_mul, self, spacename, key, predicates, attributes);
}
VALUE
hyperdex_ruby_client_wait_cond_atomic_mul(VALUE self, VALUE spacename, VALUE key, VALUE predicates, VALUE attributes)
{
    VALUE deferred = hyperdex_ruby_client_cond_atomic_mul(self, spacename, key, predicates, attributes);
    return rb_funcall(deferred, rb_intern("wait"), 0);
}

static VALUE
hyperdex_ruby_client_atomic_div(VALUE self, VALUE spacename, VALUE key, VALUE attributes)
{
    return _hyperdex_ruby_client_asynccall__spacename_key_attributes__status(hyperdex_client_atomic_div, self, spacename, key, attributes);
}
VALUE
hyperdex_ruby_client_wait_atomic_div(VALUE self, VALUE spacename, VALUE key, VALUE attributes)
{
    VALUE deferred = hyperdex_ruby_client_atomic_div(self, spacename, key, attributes);
    return rb_funcall(deferred, rb_intern("wait"), 0);
}

static VALUE
hyperdex_ruby_client_cond_atomic_div(VALUE self, VALUE spacename, VALUE key, VALUE predicates, VALUE attributes)
{
    return _hyperdex_ruby_client_asynccall__spacename_key_predicates_attributes__status(hyperdex_client_cond_atomic_div, self, spacename, key, predicates, attributes);
}
VALUE
hyperdex_ruby_client_wait_cond_atomic_div(VALUE self, VALUE spacename, VALUE key, VALUE predicates, VALUE attributes)
{
    VALUE deferred = hyperdex_ruby_client_cond_atomic_div(self, spacename, key, predicates, attributes);
    return rb_funcall(deferred, rb_intern("wait"), 0);
}

static VALUE
hyperdex_ruby_client_atomic_mod(VALUE self, VALUE spacename, VALUE key, VALUE attributes)
{
    return _hyperdex_ruby_client_asynccall__spacename_key_attributes__status(hyperdex_client_atomic_mod, self, spacename, key, attributes);
}
VALUE
hyperdex_ruby_client_wait_atomic_mod(VALUE self, VALUE spacename, VALUE key, VALUE attributes)
{
    VALUE deferred = hyperdex_ruby_client_atomic_mod(self, spacename, key, attributes);
    return rb_funcall(deferred, rb_intern("wait"), 0);
}

static VALUE
hyperdex_ruby_client_cond_atomic_mod(VALUE self, VALUE spacename, VALUE key, VALUE predicates, VALUE attributes)
{
    return _hyperdex_ruby_client_asynccall__spacename_key_predicates_attributes__status(hyperdex_client_cond_atomic_mod, self, spacename, key, predicates, attributes);
}
VALUE
hyperdex_ruby_client_wait_cond_atomic_mod(VALUE self, VALUE spacename, VALUE key, VALUE predicates, VALUE attributes)
{
    VALUE deferred = hyperdex_ruby_client_cond_atomic_mod(self, spacename, key, predicates, attributes);
    return rb_funcall(deferred, rb_intern("wait"), 0);
}

static VALUE
hyperdex_ruby_client_atomic_and(VALUE self, VALUE spacename, VALUE key, VALUE attributes)
{
    return _hyperdex_ruby_client_asynccall__spacename_key_attributes__status(hyperdex_client_atomic_and, self, spacename, key, attributes);
}
VALUE
hyperdex_ruby_client_wait_atomic_and(VALUE self, VALUE spacename, VALUE key, VALUE attributes)
{
    VALUE deferred = hyperdex_ruby_client_atomic_and(self, spacename, key, attributes);
    return rb_funcall(deferred, rb_intern("wait"), 0);
}

static VALUE
hyperdex_ruby_client_cond_atomic_and(VALUE self, VALUE spacename, VALUE key, VALUE predicates, VALUE attributes)
{
    return _hyperdex_ruby_client_asynccall__spacename_key_predicates_attributes__status(hyperdex_client_cond_atomic_and, self, spacename, key, predicates, attributes);
}
VALUE
hyperdex_ruby_client_wait_cond_atomic_and(VALUE self, VALUE spacename, VALUE key, VALUE predicates, VALUE attributes)
{
    VALUE deferred = hyperdex_ruby_client_cond_atomic_and(self, spacename, key, predicates, attributes);
    return rb_funcall(deferred, rb_intern("wait"), 0);
}

static VALUE
hyperdex_ruby_client_atomic_or(VALUE self, VALUE spacename, VALUE key, VALUE attributes)
{
    return _hyperdex_ruby_client_asynccall__spacename_key_attributes__status(hyperdex_client_atomic_or, self, spacename, key, attributes);
}
VALUE
hyperdex_ruby_client_wait_atomic_or(VALUE self, VALUE spacename, VALUE key, VALUE attributes)
{
    VALUE deferred = hyperdex_ruby_client_atomic_or(self, spacename, key, attributes);
    return rb_funcall(deferred, rb_intern("wait"), 0);
}

static VALUE
hyperdex_ruby_client_cond_atomic_or(VALUE self, VALUE spacename, VALUE key, VALUE predicates, VALUE attributes)
{
    return _hyperdex_ruby_client_asynccall__spacename_key_predicates_attributes__status(hyperdex_client_cond_atomic_or, self, spacename, key, predicates, attributes);
}
VALUE
hyperdex_ruby_client_wait_cond_atomic_or(VALUE self, VALUE spacename, VALUE key, VALUE predicates, VALUE attributes)
{
    VALUE deferred = hyperdex_ruby_client_cond_atomic_or(self, spacename, key, predicates, attributes);
    return rb_funcall(deferred, rb_intern("wait"), 0);
}

static VALUE
hyperdex_ruby_client_atomic_xor(VALUE self, VALUE spacename, VALUE key, VALUE attributes)
{
    return _hyperdex_ruby_client_asynccall__spacename_key_attributes__status(hyperdex_client_atomic_xor, self, spacename, key, attributes);
}
VALUE
hyperdex_ruby_client_wait_atomic_xor(VALUE self, VALUE spacename, VALUE key, VALUE attributes)
{
    VALUE deferred = hyperdex_ruby_client_atomic_xor(self, spacename, key, attributes);
    return rb_funcall(deferred, rb_intern("wait"), 0);
}

static VALUE
hyperdex_ruby_client_cond_atomic_xor(VALUE self, VALUE spacename, VALUE key, VALUE predicates, VALUE attributes)
{
    return _hyperdex_ruby_client_asynccall__spacename_key_predicates_attributes__status(hyperdex_client_cond_atomic_xor, self, spacename, key, predicates, attributes);
}
VALUE
hyperdex_ruby_client_wait_cond_atomic_xor(VALUE self, VALUE spacename, VALUE key, VALUE predicates, VALUE attributes)
{
    VALUE deferred = hyperdex_ruby_client_cond_atomic_xor(self, spacename, key, predicates, attributes);
    return rb_funcall(deferred, rb_intern("wait"), 0);
}

static VALUE
hyperdex_ruby_client_string_prepend(VALUE self, VALUE spacename, VALUE key, VALUE attributes)
{
    return _hyperdex_ruby_client_asynccall__spacename_key_attributes__status(hyperdex_client_string_prepend, self, spacename, key, attributes);
}
VALUE
hyperdex_ruby_client_wait_string_prepend(VALUE self, VALUE spacename, VALUE key, VALUE attributes)
{
    VALUE deferred = hyperdex_ruby_client_string_prepend(self, spacename, key, attributes);
    return rb_funcall(deferred, rb_intern("wait"), 0);
}

static VALUE
hyperdex_ruby_client_cond_string_prepend(VALUE self, VALUE spacename, VALUE key, VALUE predicates, VALUE attributes)
{
    return _hyperdex_ruby_client_asynccall__spacename_key_predicates_attributes__status(hyperdex_client_cond_string_prepend, self, spacename, key, predicates, attributes);
}
VALUE
hyperdex_ruby_client_wait_cond_string_prepend(VALUE self, VALUE spacename, VALUE key, VALUE predicates, VALUE attributes)
{
    VALUE deferred = hyperdex_ruby_client_cond_string_prepend(self, spacename, key, predicates, attributes);
    return rb_funcall(deferred, rb_intern("wait"), 0);
}

static VALUE
hyperdex_ruby_client_string_append(VALUE self, VALUE spacename, VALUE key, VALUE attributes)
{
    return _hyperdex_ruby_client_asynccall__spacename_key_attributes__status(hyperdex_client_string_append, self, spacename, key, attributes);
}
VALUE
hyperdex_ruby_client_wait_string_append(VALUE self, VALUE spacename, VALUE key, VALUE attributes)
{
    VALUE deferred = hyperdex_ruby_client_string_append(self, spacename, key, attributes);
    return rb_funcall(deferred, rb_intern("wait"), 0);
}

static VALUE
hyperdex_ruby_client_cond_string_append(VALUE self, VALUE spacename, VALUE key, VALUE predicates, VALUE attributes)
{
    return _hyperdex_ruby_client_asynccall__spacename_key_predicates_attributes__status(hyperdex_client_cond_string_append, self, spacename, key, predicates, attributes);
}
VALUE
hyperdex_ruby_client_wait_cond_string_append(VALUE self, VALUE spacename, VALUE key, VALUE predicates, VALUE attributes)
{
    VALUE deferred = hyperdex_ruby_client_cond_string_append(self, spacename, key, predicates, attributes);
    return rb_funcall(deferred, rb_intern("wait"), 0);
}

static VALUE
hyperdex_ruby_client_list_lpush(VALUE self, VALUE spacename, VALUE key, VALUE attributes)
{
    return _hyperdex_ruby_client_asynccall__spacename_key_attributes__status(hyperdex_client_list_lpush, self, spacename, key, attributes);
}
VALUE
hyperdex_ruby_client_wait_list_lpush(VALUE self, VALUE spacename, VALUE key, VALUE attributes)
{
    VALUE deferred = hyperdex_ruby_client_list_lpush(self, spacename, key, attributes);
    return rb_funcall(deferred, rb_intern("wait"), 0);
}

static VALUE
hyperdex_ruby_client_cond_list_lpush(VALUE self, VALUE spacename, VALUE key, VALUE predicates, VALUE attributes)
{
    return _hyperdex_ruby_client_asynccall__spacename_key_predicates_attributes__status(hyperdex_client_cond_list_lpush, self, spacename, key, predicates, attributes);
}
VALUE
hyperdex_ruby_client_wait_cond_list_lpush(VALUE self, VALUE spacename, VALUE key, VALUE predicates, VALUE attributes)
{
    VALUE deferred = hyperdex_ruby_client_cond_list_lpush(self, spacename, key, predicates, attributes);
    return rb_funcall(deferred, rb_intern("wait"), 0);
}

static VALUE
hyperdex_ruby_client_list_rpush(VALUE self, VALUE spacename, VALUE key, VALUE attributes)
{
    return _hyperdex_ruby_client_asynccall__spacename_key_attributes__status(hyperdex_client_list_rpush, self, spacename, key, attributes);
}
VALUE
hyperdex_ruby_client_wait_list_rpush(VALUE self, VALUE spacename, VALUE key, VALUE attributes)
{
    VALUE deferred = hyperdex_ruby_client_list_rpush(self, spacename, key, attributes);
    return rb_funcall(deferred, rb_intern("wait"), 0);
}

static VALUE
hyperdex_ruby_client_cond_list_rpush(VALUE self, VALUE spacename, VALUE key, VALUE predicates, VALUE attributes)
{
    return _hyperdex_ruby_client_asynccall__spacename_key_predicates_attributes__status(hyperdex_client_cond_list_rpush, self, spacename, key, predicates, attributes);
}
VALUE
hyperdex_ruby_client_wait_cond_list_rpush(VALUE self, VALUE spacename, VALUE key, VALUE predicates, VALUE attributes)
{
    VALUE deferred = hyperdex_ruby_client_cond_list_rpush(self, spacename, key, predicates, attributes);
    return rb_funcall(deferred, rb_intern("wait"), 0);
}

static VALUE
hyperdex_ruby_client_set_add(VALUE self, VALUE spacename, VALUE key, VALUE attributes)
{
    return _hyperdex_ruby_client_asynccall__spacename_key_attributes__status(hyperdex_client_set_add, self, spacename, key, attributes);
}
VALUE
hyperdex_ruby_client_wait_set_add(VALUE self, VALUE spacename, VALUE key, VALUE attributes)
{
    VALUE deferred = hyperdex_ruby_client_set_add(self, spacename, key, attributes);
    return rb_funcall(deferred, rb_intern("wait"), 0);
}

static VALUE
hyperdex_ruby_client_cond_set_add(VALUE self, VALUE spacename, VALUE key, VALUE predicates, VALUE attributes)
{
    return _hyperdex_ruby_client_asynccall__spacename_key_predicates_attributes__status(hyperdex_client_cond_set_add, self, spacename, key, predicates, attributes);
}
VALUE
hyperdex_ruby_client_wait_cond_set_add(VALUE self, VALUE spacename, VALUE key, VALUE predicates, VALUE attributes)
{
    VALUE deferred = hyperdex_ruby_client_cond_set_add(self, spacename, key, predicates, attributes);
    return rb_funcall(deferred, rb_intern("wait"), 0);
}

static VALUE
hyperdex_ruby_client_set_remove(VALUE self, VALUE spacename, VALUE key, VALUE attributes)
{
    return _hyperdex_ruby_client_asynccall__spacename_key_attributes__status(hyperdex_client_set_remove, self, spacename, key, attributes);
}
VALUE
hyperdex_ruby_client_wait_set_remove(VALUE self, VALUE spacename, VALUE key, VALUE attributes)
{
    VALUE deferred = hyperdex_ruby_client_set_remove(self, spacename, key, attributes);
    return rb_funcall(deferred, rb_intern("wait"), 0);
}

static VALUE
hyperdex_ruby_client_cond_set_remove(VALUE self, VALUE spacename, VALUE key, VALUE predicates, VALUE attributes)
{
    return _hyperdex_ruby_client_asynccall__spacename_key_predicates_attributes__status(hyperdex_client_cond_set_remove, self, spacename, key, predicates, attributes);
}
VALUE
hyperdex_ruby_client_wait_cond_set_remove(VALUE self, VALUE spacename, VALUE key, VALUE predicates, VALUE attributes)
{
    VALUE deferred = hyperdex_ruby_client_cond_set_remove(self, spacename, key, predicates, attributes);
    return rb_funcall(deferred, rb_intern("wait"), 0);
}

static VALUE
hyperdex_ruby_client_set_intersect(VALUE self, VALUE spacename, VALUE key, VALUE attributes)
{
    return _hyperdex_ruby_client_asynccall__spacename_key_attributes__status(hyperdex_client_set_intersect, self, spacename, key, attributes);
}
VALUE
hyperdex_ruby_client_wait_set_intersect(VALUE self, VALUE spacename, VALUE key, VALUE attributes)
{
    VALUE deferred = hyperdex_ruby_client_set_intersect(self, spacename, key, attributes);
    return rb_funcall(deferred, rb_intern("wait"), 0);
}

static VALUE
hyperdex_ruby_client_cond_set_intersect(VALUE self, VALUE spacename, VALUE key, VALUE predicates, VALUE attributes)
{
    return _hyperdex_ruby_client_asynccall__spacename_key_predicates_attributes__status(hyperdex_client_cond_set_intersect, self, spacename, key, predicates, attributes);
}
VALUE
hyperdex_ruby_client_wait_cond_set_intersect(VALUE self, VALUE spacename, VALUE key, VALUE predicates, VALUE attributes)
{
    VALUE deferred = hyperdex_ruby_client_cond_set_intersect(self, spacename, key, predicates, attributes);
    return rb_funcall(deferred, rb_intern("wait"), 0);
}

static VALUE
hyperdex_ruby_client_set_union(VALUE self, VALUE spacename, VALUE key, VALUE attributes)
{
    return _hyperdex_ruby_client_asynccall__spacename_key_attributes__status(hyperdex_client_set_union, self, spacename, key, attributes);
}
VALUE
hyperdex_ruby_client_wait_set_union(VALUE self, VALUE spacename, VALUE key, VALUE attributes)
{
    VALUE deferred = hyperdex_ruby_client_set_union(self, spacename, key, attributes);
    return rb_funcall(deferred, rb_intern("wait"), 0);
}

static VALUE
hyperdex_ruby_client_cond_set_union(VALUE self, VALUE spacename, VALUE key, VALUE predicates, VALUE attributes)
{
    return _hyperdex_ruby_client_asynccall__spacename_key_predicates_attributes__status(hyperdex_client_cond_set_union, self, spacename, key, predicates, attributes);
}
VALUE
hyperdex_ruby_client_wait_cond_set_union(VALUE self, VALUE spacename, VALUE key, VALUE predicates, VALUE attributes)
{
    VALUE deferred = hyperdex_ruby_client_cond_set_union(self, spacename, key, predicates, attributes);
    return rb_funcall(deferred, rb_intern("wait"), 0);
}

static VALUE
hyperdex_ruby_client_map_add(VALUE self, VALUE spacename, VALUE key, VALUE mapattributes)
{
    return _hyperdex_ruby_client_asynccall__spacename_key_mapattributes__status(hyperdex_client_map_add, self, spacename, key, mapattributes);
}
VALUE
hyperdex_ruby_client_wait_map_add(VALUE self, VALUE spacename, VALUE key, VALUE mapattributes)
{
    VALUE deferred = hyperdex_ruby_client_map_add(self, spacename, key, mapattributes);
    return rb_funcall(deferred, rb_intern("wait"), 0);
}

static VALUE
hyperdex_ruby_client_cond_map_add(VALUE self, VALUE spacename, VALUE key, VALUE predicates, VALUE mapattributes)
{
    return _hyperdex_ruby_client_asynccall__spacename_key_predicates_mapattributes__status(hyperdex_client_cond_map_add, self, spacename, key, predicates, mapattributes);
}
VALUE
hyperdex_ruby_client_wait_cond_map_add(VALUE self, VALUE spacename, VALUE key, VALUE predicates, VALUE mapattributes)
{
    VALUE deferred = hyperdex_ruby_client_cond_map_add(self, spacename, key, predicates, mapattributes);
    return rb_funcall(deferred, rb_intern("wait"), 0);
}

static VALUE
hyperdex_ruby_client_map_remove(VALUE self, VALUE spacename, VALUE key, VALUE attributes)
{
    return _hyperdex_ruby_client_asynccall__spacename_key_attributes__status(hyperdex_client_map_remove, self, spacename, key, attributes);
}
VALUE
hyperdex_ruby_client_wait_map_remove(VALUE self, VALUE spacename, VALUE key, VALUE attributes)
{
    VALUE deferred = hyperdex_ruby_client_map_remove(self, spacename, key, attributes);
    return rb_funcall(deferred, rb_intern("wait"), 0);
}

static VALUE
hyperdex_ruby_client_cond_map_remove(VALUE self, VALUE spacename, VALUE key, VALUE predicates, VALUE attributes)
{
    return _hyperdex_ruby_client_asynccall__spacename_key_predicates_attributes__status(hyperdex_client_cond_map_remove, self, spacename, key, predicates, attributes);
}
VALUE
hyperdex_ruby_client_wait_cond_map_remove(VALUE self, VALUE spacename, VALUE key, VALUE predicates, VALUE attributes)
{
    VALUE deferred = hyperdex_ruby_client_cond_map_remove(self, spacename, key, predicates, attributes);
    return rb_funcall(deferred, rb_intern("wait"), 0);
}

static VALUE
hyperdex_ruby_client_map_atomic_add(VALUE self, VALUE spacename, VALUE key, VALUE mapattributes)
{
    return _hyperdex_ruby_client_asynccall__spacename_key_mapattributes__status(hyperdex_client_map_atomic_add, self, spacename, key, mapattributes);
}
VALUE
hyperdex_ruby_client_wait_map_atomic_add(VALUE self, VALUE spacename, VALUE key, VALUE mapattributes)
{
    VALUE deferred = hyperdex_ruby_client_map_atomic_add(self, spacename, key, mapattributes);
    return rb_funcall(deferred, rb_intern("wait"), 0);
}

static VALUE
hyperdex_ruby_client_cond_map_atomic_add(VALUE self, VALUE spacename, VALUE key, VALUE predicates, VALUE mapattributes)
{
    return _hyperdex_ruby_client_asynccall__spacename_key_predicates_mapattributes__status(hyperdex_client_cond_map_atomic_add, self, spacename, key, predicates, mapattributes);
}
VALUE
hyperdex_ruby_client_wait_cond_map_atomic_add(VALUE self, VALUE spacename, VALUE key, VALUE predicates, VALUE mapattributes)
{
    VALUE deferred = hyperdex_ruby_client_cond_map_atomic_add(self, spacename, key, predicates, mapattributes);
    return rb_funcall(deferred, rb_intern("wait"), 0);
}

static VALUE
hyperdex_ruby_client_map_atomic_sub(VALUE self, VALUE spacename, VALUE key, VALUE mapattributes)
{
    return _hyperdex_ruby_client_asynccall__spacename_key_mapattributes__status(hyperdex_client_map_atomic_sub, self, spacename, key, mapattributes);
}
VALUE
hyperdex_ruby_client_wait_map_atomic_sub(VALUE self, VALUE spacename, VALUE key, VALUE mapattributes)
{
    VALUE deferred = hyperdex_ruby_client_map_atomic_sub(self, spacename, key, mapattributes);
    return rb_funcall(deferred, rb_intern("wait"), 0);
}

static VALUE
hyperdex_ruby_client_cond_map_atomic_sub(VALUE self, VALUE spacename, VALUE key, VALUE predicates, VALUE mapattributes)
{
    return _hyperdex_ruby_client_asynccall__spacename_key_predicates_mapattributes__status(hyperdex_client_cond_map_atomic_sub, self, spacename, key, predicates, mapattributes);
}
VALUE
hyperdex_ruby_client_wait_cond_map_atomic_sub(VALUE self, VALUE spacename, VALUE key, VALUE predicates, VALUE mapattributes)
{
    VALUE deferred = hyperdex_ruby_client_cond_map_atomic_sub(self, spacename, key, predicates, mapattributes);
    return rb_funcall(deferred, rb_intern("wait"), 0);
}

static VALUE
hyperdex_ruby_client_map_atomic_mul(VALUE self, VALUE spacename, VALUE key, VALUE mapattributes)
{
    return _hyperdex_ruby_client_asynccall__spacename_key_mapattributes__status(hyperdex_client_map_atomic_mul, self, spacename, key, mapattributes);
}
VALUE
hyperdex_ruby_client_wait_map_atomic_mul(VALUE self, VALUE spacename, VALUE key, VALUE mapattributes)
{
    VALUE deferred = hyperdex_ruby_client_map_atomic_mul(self, spacename, key, mapattributes);
    return rb_funcall(deferred, rb_intern("wait"), 0);
}

static VALUE
hyperdex_ruby_client_cond_map_atomic_mul(VALUE self, VALUE spacename, VALUE key, VALUE predicates, VALUE mapattributes)
{
    return _hyperdex_ruby_client_asynccall__spacename_key_predicates_mapattributes__status(hyperdex_client_cond_map_atomic_mul, self, spacename, key, predicates, mapattributes);
}
VALUE
hyperdex_ruby_client_wait_cond_map_atomic_mul(VALUE self, VALUE spacename, VALUE key, VALUE predicates, VALUE mapattributes)
{
    VALUE deferred = hyperdex_ruby_client_cond_map_atomic_mul(self, spacename, key, predicates, mapattributes);
    return rb_funcall(deferred, rb_intern("wait"), 0);
}

static VALUE
hyperdex_ruby_client_map_atomic_div(VALUE self, VALUE spacename, VALUE key, VALUE mapattributes)
{
    return _hyperdex_ruby_client_asynccall__spacename_key_mapattributes__status(hyperdex_client_map_atomic_div, self, spacename, key, mapattributes);
}
VALUE
hyperdex_ruby_client_wait_map_atomic_div(VALUE self, VALUE spacename, VALUE key, VALUE mapattributes)
{
    VALUE deferred = hyperdex_ruby_client_map_atomic_div(self, spacename, key, mapattributes);
    return rb_funcall(deferred, rb_intern("wait"), 0);
}

static VALUE
hyperdex_ruby_client_cond_map_atomic_div(VALUE self, VALUE spacename, VALUE key, VALUE predicates, VALUE mapattributes)
{
    return _hyperdex_ruby_client_asynccall__spacename_key_predicates_mapattributes__status(hyperdex_client_cond_map_atomic_div, self, spacename, key, predicates, mapattributes);
}
VALUE
hyperdex_ruby_client_wait_cond_map_atomic_div(VALUE self, VALUE spacename, VALUE key, VALUE predicates, VALUE mapattributes)
{
    VALUE deferred = hyperdex_ruby_client_cond_map_atomic_div(self, spacename, key, predicates, mapattributes);
    return rb_funcall(deferred, rb_intern("wait"), 0);
}

static VALUE
hyperdex_ruby_client_map_atomic_mod(VALUE self, VALUE spacename, VALUE key, VALUE mapattributes)
{
    return _hyperdex_ruby_client_asynccall__spacename_key_mapattributes__status(hyperdex_client_map_atomic_mod, self, spacename, key, mapattributes);
}
VALUE
hyperdex_ruby_client_wait_map_atomic_mod(VALUE self, VALUE spacename, VALUE key, VALUE mapattributes)
{
    VALUE deferred = hyperdex_ruby_client_map_atomic_mod(self, spacename, key, mapattributes);
    return rb_funcall(deferred, rb_intern("wait"), 0);
}

static VALUE
hyperdex_ruby_client_cond_map_atomic_mod(VALUE self, VALUE spacename, VALUE key, VALUE predicates, VALUE mapattributes)
{
    return _hyperdex_ruby_client_asynccall__spacename_key_predicates_mapattributes__status(hyperdex_client_cond_map_atomic_mod, self, spacename, key, predicates, mapattributes);
}
VALUE
hyperdex_ruby_client_wait_cond_map_atomic_mod(VALUE self, VALUE spacename, VALUE key, VALUE predicates, VALUE mapattributes)
{
    VALUE deferred = hyperdex_ruby_client_cond_map_atomic_mod(self, spacename, key, predicates, mapattributes);
    return rb_funcall(deferred, rb_intern("wait"), 0);
}

static VALUE
hyperdex_ruby_client_map_atomic_and(VALUE self, VALUE spacename, VALUE key, VALUE mapattributes)
{
    return _hyperdex_ruby_client_asynccall__spacename_key_mapattributes__status(hyperdex_client_map_atomic_and, self, spacename, key, mapattributes);
}
VALUE
hyperdex_ruby_client_wait_map_atomic_and(VALUE self, VALUE spacename, VALUE key, VALUE mapattributes)
{
    VALUE deferred = hyperdex_ruby_client_map_atomic_and(self, spacename, key, mapattributes);
    return rb_funcall(deferred, rb_intern("wait"), 0);
}

static VALUE
hyperdex_ruby_client_cond_map_atomic_and(VALUE self, VALUE spacename, VALUE key, VALUE predicates, VALUE mapattributes)
{
    return _hyperdex_ruby_client_asynccall__spacename_key_predicates_mapattributes__status(hyperdex_client_cond_map_atomic_and, self, spacename, key, predicates, mapattributes);
}
VALUE
hyperdex_ruby_client_wait_cond_map_atomic_and(VALUE self, VALUE spacename, VALUE key, VALUE predicates, VALUE mapattributes)
{
    VALUE deferred = hyperdex_ruby_client_cond_map_atomic_and(self, spacename, key, predicates, mapattributes);
    return rb_funcall(deferred, rb_intern("wait"), 0);
}

static VALUE
hyperdex_ruby_client_map_atomic_or(VALUE self, VALUE spacename, VALUE key, VALUE mapattributes)
{
    return _hyperdex_ruby_client_asynccall__spacename_key_mapattributes__status(hyperdex_client_map_atomic_or, self, spacename, key, mapattributes);
}
VALUE
hyperdex_ruby_client_wait_map_atomic_or(VALUE self, VALUE spacename, VALUE key, VALUE mapattributes)
{
    VALUE deferred = hyperdex_ruby_client_map_atomic_or(self, spacename, key, mapattributes);
    return rb_funcall(deferred, rb_intern("wait"), 0);
}

static VALUE
hyperdex_ruby_client_cond_map_atomic_or(VALUE self, VALUE spacename, VALUE key, VALUE predicates, VALUE mapattributes)
{
    return _hyperdex_ruby_client_asynccall__spacename_key_predicates_mapattributes__status(hyperdex_client_cond_map_atomic_or, self, spacename, key, predicates, mapattributes);
}
VALUE
hyperdex_ruby_client_wait_cond_map_atomic_or(VALUE self, VALUE spacename, VALUE key, VALUE predicates, VALUE mapattributes)
{
    VALUE deferred = hyperdex_ruby_client_cond_map_atomic_or(self, spacename, key, predicates, mapattributes);
    return rb_funcall(deferred, rb_intern("wait"), 0);
}

static VALUE
hyperdex_ruby_client_map_atomic_xor(VALUE self, VALUE spacename, VALUE key, VALUE mapattributes)
{
    return _hyperdex_ruby_client_asynccall__spacename_key_mapattributes__status(hyperdex_client_map_atomic_xor, self, spacename, key, mapattributes);
}
VALUE
hyperdex_ruby_client_wait_map_atomic_xor(VALUE self, VALUE spacename, VALUE key, VALUE mapattributes)
{
    VALUE deferred = hyperdex_ruby_client_map_atomic_xor(self, spacename, key, mapattributes);
    return rb_funcall(deferred, rb_intern("wait"), 0);
}

static VALUE
hyperdex_ruby_client_cond_map_atomic_xor(VALUE self, VALUE spacename, VALUE key, VALUE predicates, VALUE mapattributes)
{
    return _hyperdex_ruby_client_asynccall__spacename_key_predicates_mapattributes__status(hyperdex_client_cond_map_atomic_xor, self, spacename, key, predicates, mapattributes);
}
VALUE
hyperdex_ruby_client_wait_cond_map_atomic_xor(VALUE self, VALUE spacename, VALUE key, VALUE predicates, VALUE mapattributes)
{
    VALUE deferred = hyperdex_ruby_client_cond_map_atomic_xor(self, spacename, key, predicates, mapattributes);
    return rb_funcall(deferred, rb_intern("wait"), 0);
}

static VALUE
hyperdex_ruby_client_map_string_prepend(VALUE self, VALUE spacename, VALUE key, VALUE mapattributes)
{
    return _hyperdex_ruby_client_asynccall__spacename_key_mapattributes__status(hyperdex_client_map_string_prepend, self, spacename, key, mapattributes);
}
VALUE
hyperdex_ruby_client_wait_map_string_prepend(VALUE self, VALUE spacename, VALUE key, VALUE mapattributes)
{
    VALUE deferred = hyperdex_ruby_client_map_string_prepend(self, spacename, key, mapattributes);
    return rb_funcall(deferred, rb_intern("wait"), 0);
}

static VALUE
hyperdex_ruby_client_cond_map_string_prepend(VALUE self, VALUE spacename, VALUE key, VALUE predicates, VALUE mapattributes)
{
    return _hyperdex_ruby_client_asynccall__spacename_key_predicates_mapattributes__status(hyperdex_client_cond_map_string_prepend, self, spacename, key, predicates, mapattributes);
}
VALUE
hyperdex_ruby_client_wait_cond_map_string_prepend(VALUE self, VALUE spacename, VALUE key, VALUE predicates, VALUE mapattributes)
{
    VALUE deferred = hyperdex_ruby_client_cond_map_string_prepend(self, spacename, key, predicates, mapattributes);
    return rb_funcall(deferred, rb_intern("wait"), 0);
}

static VALUE
hyperdex_ruby_client_map_string_append(VALUE self, VALUE spacename, VALUE key, VALUE mapattributes)
{
    return _hyperdex_ruby_client_asynccall__spacename_key_mapattributes__status(hyperdex_client_map_string_append, self, spacename, key, mapattributes);
}
VALUE
hyperdex_ruby_client_wait_map_string_append(VALUE self, VALUE spacename, VALUE key, VALUE mapattributes)
{
    VALUE deferred = hyperdex_ruby_client_map_string_append(self, spacename, key, mapattributes);
    return rb_funcall(deferred, rb_intern("wait"), 0);
}

static VALUE
hyperdex_ruby_client_cond_map_string_append(VALUE self, VALUE spacename, VALUE key, VALUE predicates, VALUE mapattributes)
{
    return _hyperdex_ruby_client_asynccall__spacename_key_predicates_mapattributes__status(hyperdex_client_cond_map_string_append, self, spacename, key, predicates, mapattributes);
}
VALUE
hyperdex_ruby_client_wait_cond_map_string_append(VALUE self, VALUE spacename, VALUE key, VALUE predicates, VALUE mapattributes)
{
    VALUE deferred = hyperdex_ruby_client_cond_map_string_append(self, spacename, key, predicates, mapattributes);
    return rb_funcall(deferred, rb_intern("wait"), 0);
}

static VALUE
hyperdex_ruby_client_search(VALUE self, VALUE spacename, VALUE predicates)
{
    return _hyperdex_ruby_client_iterator__spacename_predicates__status_attributes(hyperdex_client_search, self, spacename, predicates);
}

static VALUE
hyperdex_ruby_client_search_describe(VALUE self, VALUE spacename, VALUE predicates)
{
    return _hyperdex_ruby_client_asynccall__spacename_predicates__status_description(hyperdex_client_search_describe, self, spacename, predicates);
}
VALUE
hyperdex_ruby_client_wait_search_describe(VALUE self, VALUE spacename, VALUE predicates)
{
    VALUE deferred = hyperdex_ruby_client_search_describe(self, spacename, predicates);
    return rb_funcall(deferred, rb_intern("wait"), 0);
}

static VALUE
hyperdex_ruby_client_sorted_search(VALUE self, VALUE spacename, VALUE predicates, VALUE sortby, VALUE limit, VALUE maxmin)
{
    return _hyperdex_ruby_client_iterator__spacename_predicates_sortby_limit_maxmin__status_attributes(hyperdex_client_sorted_search, self, spacename, predicates, sortby, limit, maxmin);
}

static VALUE
hyperdex_ruby_client_group_del(VALUE self, VALUE spacename, VALUE predicates)
{
    return _hyperdex_ruby_client_asynccall__spacename_predicates__status(hyperdex_client_group_del, self, spacename, predicates);
}
VALUE
hyperdex_ruby_client_wait_group_del(VALUE self, VALUE spacename, VALUE predicates)
{
    VALUE deferred = hyperdex_ruby_client_group_del(self, spacename, predicates);
    return rb_funcall(deferred, rb_intern("wait"), 0);
}

static VALUE
hyperdex_ruby_client_count(VALUE self, VALUE spacename, VALUE predicates)
{
    return _hyperdex_ruby_client_asynccall__spacename_predicates__status_count(hyperdex_client_count, self, spacename, predicates);
}
VALUE
hyperdex_ruby_client_wait_count(VALUE self, VALUE spacename, VALUE predicates)
{
    VALUE deferred = hyperdex_ruby_client_count(self, spacename, predicates);
    return rb_funcall(deferred, rb_intern("wait"), 0);
}