class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix=strs[0];
        int prefixLen=prefix.length();
        for(int i=1;i<strs.size();i++){
            string curr=strs[i];
            int len=0;
            for(int j=0;j<min(prefix.length(),curr.length());j++){
                if(prefix[j]==curr[j])
                    len++;
                else
                    break;
            }
            prefixLen=min(prefixLen,len);
        }
        return prefix.substr(0,prefixLen);
    }
};