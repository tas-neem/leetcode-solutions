class Solution {
public:
    bool substring(string s1,string s2){
        if(s1.length()>s2.length()) return false;
        int i=0,j=0;
        for(int i=0;i<=s2.length()-s1.length();i++){
            int j=0;
            while(j<s1.length() && s1[j]==s2[i+j])
                j++;
            if(j==s1.length())
                return true;
        }
        return false;
    }
    vector<string> stringMatching(vector<string>& words) {
        vector<string> res;
        for(int i=0;i<words.size();i++){
            for(int j=0;j<words.size();j++){
                if(i==j) continue;
                if(substring(words[i],words[j])){
                    res.push_back(words[i]);
                    break;
                }
            }
        }
        return res;
    }
};