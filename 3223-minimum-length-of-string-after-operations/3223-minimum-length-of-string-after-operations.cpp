class Solution {
public:
    int minimumLength(string s) {
        int mp[26]={0},len=0;
        for(char c:s){
            mp[c-'a']++;
        }
        for(int i:mp){
            while(i>=3)
                i=i-2;
            len+=i;
        }
        return len;
    }
};