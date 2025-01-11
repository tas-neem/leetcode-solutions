class Solution {
public:
    bool canConstruct(string s, int k) {
        if(s.length()<k)
            return false;
        unordered_map<char,int> mp;
        int count=0;
        for(char c:s){
            mp[c]++;
        }
        for(auto it:mp){
            if(it.second%2!=0)
                count++;
        }
        if(count>k)
            return false;
        return true;
    }
};