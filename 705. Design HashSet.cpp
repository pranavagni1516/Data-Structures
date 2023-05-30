class MyHashSet {
public:
    vector<bool>hashtable;
    MyHashSet() {
        hashtable = vector<bool>(1000001,0);
    }
    
    void add(int key) {
        hashtable[key]=true;
    }
    
    void remove(int key) {
        hashtable[key]=false;
    }
    
    bool contains(int key) {
        return hashtable[key]==tr
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */