class Solution {
public:
    vector<string> getLongestSubsequence(vector<string>& words, vector<int>& groups) {
        vector<string> res;
        for(int i=0;i<groups.size();i++){
            if(i==0)
                res.push_back(words[i]);
            else if(groups[i-1]!=groups[i]){
                res.push_back(words[i]);
            }
        }
        return res;
    }
};