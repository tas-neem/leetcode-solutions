class Solution {
public:
    string reverseWords(string s) {
        int i=s.length()-1;
        string temp,res;
        while(i>=0){
            while(i>=0 && s[i]==' ')
                i--;
            int end=i+1;
            while(i>=0 && s[i]!=' ')
                i--;
            temp=s.substr(i+1,end-(i+1));
            if(!temp.empty()){
                if(!res.empty())
                    res+=" ";
                res+=temp;
            }
        }
        return res;
    }
};