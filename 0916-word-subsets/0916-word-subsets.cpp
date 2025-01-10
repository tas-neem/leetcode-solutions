class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        vector<string> res;
        int mp2[26]={0};
        for(string s:words2){
            int arr[26]={0};
            for(char c:s){
                arr[c-'a']++;
                mp2[c-'a']=max(mp2[c-'a'],arr[c-'a']);
            }   
        }
        for(string s:words1){
            int mp1[26]={0};
            for(char c:s){
                mp1[c-'a']++;
            }   
            bool fl=true;
            for(int i=0;i<26;i++){
                if(mp2[i]>mp1[i])
                    fl=false;
            }
            if(fl)
                res.push_back(s);
        }
        return res;
    }
};