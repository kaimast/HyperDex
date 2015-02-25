/* Copyright (c) 2015, Cornell University
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
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

/* This file is generated by bindings/java.py */

package org.hyperdex.client;

import java.util.List;
import java.util.Map;
import java.util.HashMap;

public class Microtransaction
{
    static
    {
        initialize();
    }

    protected Microtransaction(Client client, String space)
    {
        this.client = client;
        this._create(space);
    }
    
    private Client client;
    
    private long uxact_ptr;
    private long deferred_ptr;
    
    private native void _create(String space);
    private native void _destroy();
    
    /* cached IDs */
    private static native void initialize();
    private static native void terminate();
    
    public Long group_commit(Map<String,Object> checks) throws HyperDexClientException {
        return (Long) async_group_commit(checks).waitForIt();
    }
    
    public native Deferred async_group_commit(Map<String,Object> checks) throws HyperDexClientException;
    
    public Boolean commit(String key) throws HyperDexClientException {
        return (Boolean) async_commit(key).waitForIt();
    }
    
    public native Deferred async_commit(String key) throws HyperDexClientException;
    public native int put(Map<String,Object> attrs) throws HyperDexClientException;

    public native int atomic_add(Map<String,Object> attrs) throws HyperDexClientException;

    public native int atomic_sub(Map<String,Object> attrs) throws HyperDexClientException;

    public native int atomic_mul(Map<String,Object> attrs) throws HyperDexClientException;

    public native int atomic_div(Map<String,Object> attrs) throws HyperDexClientException;

    public native int atomic_and(Map<String,Object> attrs) throws HyperDexClientException;

    public native int atomic_or(Map<String,Object> attrs) throws HyperDexClientException;

    public native int string_prepend(Map<String,Object> attrs) throws HyperDexClientException;

    public native int string_append(Map<String,Object> attrs) throws HyperDexClientException;

    public native int list_lpush(Map<String,Object> attrs) throws HyperDexClientException;

    public native int list_rpush(Map<String,Object> attrs) throws HyperDexClientException;

    public native int document_rename(Map<String,Object> attrs) throws HyperDexClientException;

    public native int document_unset(Map<String,Object> attrs) throws HyperDexClientException;
}
