class Solution {
public:
    bool isPrefixAndSuffix(string s1,string s2){
        if(s1.length()>s2.length()) 
            return false;
        int j=0;
        while(s1[j]==s2[j] && j<s1.length())
            j++;
        if(j!=s1.length())
            return false;
        j=s2.length()-1;
        int i=s1.length()-1;
        while(j>=0 && i>=0 && s1[i]==s2[j]){
            j--; 
            i--;   
        }
        if(i!=-1)
            return false;
        return true;
    }
    int countPrefixSuffixPairs(vector<string>& words) {
        int n=words.size(),res=0;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(i>=j) continue;
                if(isPrefixAndSuffix(words[i],words[j])){
                    res++;
                }
            }
        }
        return res;
    }
};