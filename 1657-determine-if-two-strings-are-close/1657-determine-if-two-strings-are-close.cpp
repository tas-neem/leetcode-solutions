class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.length()!=word2.length()) 
            return false;
        vector<int> freq1(26,0),freq2(26,0);
        for(char c:word1)
            freq1[c-'a']++;
        for(char c:word2){
            if(freq1[c-'a']==0) 
                return false;
            freq2[c-'a']++;
        }
        sort(freq1.begin(),freq1.end());
        sort(freq2.begin(),freq2.end());
        return freq1==freq2;
    }
};