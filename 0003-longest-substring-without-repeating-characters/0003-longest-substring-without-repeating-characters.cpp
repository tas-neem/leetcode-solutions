class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0,j=0,len=0;
        unordered_map<char,int> mp;
        while(j<s.length()){
            if(mp.find(s[j])!=mp.end() && mp[s[j]]<=j && mp[s[j]]>=i)
                i=mp[s[j]]+1;
            mp[s[j]]=j;
            len=max(j-i+1,len);
            j++;
        }
        return len;
    }
};