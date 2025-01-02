class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> mp;
        set<int> s;
        for(int i:arr)
            mp[i]++;
        for(auto it:mp)
            s.insert(it.second);
        return mp.size()==s.size();
    }
};