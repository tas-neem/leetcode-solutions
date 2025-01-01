class Solution {
public:
    int maxVowels(string s, int k) {
        vector<char> vowels={'a','e','i','o','u'};
        int maxv=0;
        for(int i=0;i<k;i++){
            if(find(vowels.begin(),vowels.end(),s[i])!=vowels.end())
                maxv++;
        }
        int wmax=maxv;
        for(int i=k;i<s.length();i++){
            if(find(vowels.begin(),vowels.end(),s[i-k])!=vowels.end())
                wmax--;
            if(find(vowels.begin(),vowels.end(),s[i])!=vowels.end())
                wmax++;
            maxv=max(maxv,wmax);
        }
        return maxv;
    }
};