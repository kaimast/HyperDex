import java.util.*;

import org.hyperdex.client.Client;
import org.hyperdex.client.Document;
import org.hyperdex.client.HyperDexClientException;

import org.junit.*;
import static org.junit.Assert.* ;

public class DataTypeDocument
{
    private Client c;
    
    @Before
    public void setUpHyperdexClient() throws Exception {
        c = new Client(System.getProperty("hyperdex_host"),
                Integer.parseInt(System.getProperty("hyperdex_port")));
    }
    
    @After
    public void destroyHyperdexClient() throws HyperDexClientException {
        Map<String, Object> match_all = new HashMap<>();
        c.group_del("kv", match_all);
        c = null;
    }
    
    @Test
    public void insertEmptyValue() throws HyperDexClientException {
        Map<String, Object> attrs = new HashMap<>();
        
        Boolean res = c.put("kv", "k", attrs);
        assertTrue(res);
        
        Map<String, Object> get = c.get("kv", "k");
        Map<String, Object> expected = new HashMap<>();
        expected.put("v", new Document("{}"));
        assertEquals(expected, get);
    }
    
    @Test
    public void insertEmptyDocument() throws HyperDexClientException {
        Map<String, Object> attrs = new HashMap<>();
        attrs.put("v", new Document("{}"));
        
        Boolean res = c.put("kv", "k", attrs);
        assertTrue(res);
        
        Map<String, Object> get = c.get("kv", "k");
        Map<String, Object> expected = new HashMap<>();
        expected.put("v", new Document("{}"));
        
        assertEquals(expected, get);
    }
    
    @Test
    public void insertNestedDocument() throws HyperDexClientException {
        Map<String, Object> attrs = new HashMap<String, Object>();
        attrs.put("v", new Document("{\"a\" : { \"b\" : \"c\"}}"));
        
        Boolean res = c.put("kv", "k", attrs);
        assertTrue(res);
        
        Map<String, Object> get = c.get("kv", "k");
        Map<String, Object> expected = new HashMap<String, Object>();
        assert(get.get("v") instanceof Document);
        expected.put("v", new Document("{\"a\":{\"b\":\"c\"}}")); // be careful about formatting...
        assertEquals(expected, get);
    }
    
    @Test
    public void setField() throws HyperDexClientException {
        Map<String, Object> attrs = new HashMap<>();
        attrs.put("v", new Document("{}"));
        c.put("kv", "k", attrs);
        
        Map<String, Object> attrs2 = new HashMap<>();
        attrs2.put("v.a", "xyz");
        Boolean res = c.put("kv", "k", attrs2);
        assertTrue(res);
        
        Map<String, Object> get = c.get("kv", "k");
        Map<String, Object> expected = new HashMap<>();
        assert(get.get("v") instanceof Document);
        expected.put("v", new Document("{\"a\":\"xyz\"}"));
        assertEquals(expected, get);
    }
}

