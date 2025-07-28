class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> hash(256,-1);
        int maxlen=0,left=0,right=0;
        while(right<s.length()){
            if(hash[s[right]]!=-1 && hash[s[right]]>=left){
                left=hash[s[right]]+1;
            }
            maxlen=max(maxlen,right-left+1);
            hash[s[right]]=right;
            right++;  
        }
        return maxlen;
    }
};