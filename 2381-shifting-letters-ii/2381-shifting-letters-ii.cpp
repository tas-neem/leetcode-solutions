class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
        vector<char> str(s.begin(),s.end());
        int n=s.size();
        vector<int> diffarray(n,0);
        for(int i=0;i<shifts.size();i++){
            int start=shifts[i][0],end=shifts[i][1],dir=shifts[i][2];
            int d=(dir==1)?1:-1;
            diffarray[start]+=d;
            if(end+1<n)
                diffarray[end+1]-=d;
        }
        int prefixsum=0;
        for(int i=0;i<n;i++){
            prefixsum=(prefixsum+diffarray[i])%26;
            if(prefixsum<0)
                prefixsum+=26;
            str[i]='a'+((s[i]-'a'+prefixsum)%26);
        }
        string res(str.begin(),str.end());
        return res;
    }
};