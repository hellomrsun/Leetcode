class RandomizedSet {
public:
    unordered_map<int,int> m;
    /** Initialize your data structure here. */
    RandomizedSet() {
        
    }
    
    /** Inserts a value to the set. Returns true if the set did not already contain the specified element. */
    bool insert(int val) {
        return (++m[val])==1;
    }
    
    /** Removes a value from the set. Returns true if the set contained the specified element. */
    bool remove(int val) {
        if(m.find(val)==m.end()) return false;
        m.erase(val);
        return true;
    }
    
    /** Get a random element from the set. */
    int getRandom() {
       return next(begin(m), rand()%m.size())->first;
    }
};

