class RandomizedSet {
    unordered_set<int>s;
    vector<int>v;
public:
    /** Initialize your data structure here. */
    RandomizedSet() {
        
    }
    
    /** Inserts a value to the set. Returns true if the set did not already contain the specified element. */
    bool insert(int val) {
        if(s.find(val)==s.end())
        {
            s.insert(val);
            v.push_back(val);
            return true;
        }
        return false;
    }
    
    /** Removes a value from the set. Returns true if the set contained the specified element. */
    bool remove(int val) {
        if(s.find(val)==s.end())
            return false;
        s.erase(val);
        for(int i=0;i<v.size();i++)
        {
            if(v[i]==val)
            {
                v[i]=v[v.size()-1];
                v.pop_back();
                return true;
            }
        }
        return true;
    }
    
    /** Get a random element from the set. */
    int getRandom() {
        int x=rand()%v.size();
        return v[x];
    }
};