class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int res=0;
        for(int i=0;i<words.size();i++){
            int j=0;
            while(pref[j]==words[i][j] && j<pref.length())
                j++;
            if(j==pref.length())
                res++;
        }
        return res;
    }
};