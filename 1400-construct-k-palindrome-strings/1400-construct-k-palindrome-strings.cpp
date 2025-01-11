class Solution {
public:
    bool canConstruct(string s, int k) {
        if(s.length()<k)
            return false;
        int mp[26]={0};
        int count=0;
        for(char c:s){
            mp[c-'a']++;
        }
        for(int i:mp){
            if(i%2!=0)
                count++;
        }
        if(count>k)
            return false;
        return true;
    }
};