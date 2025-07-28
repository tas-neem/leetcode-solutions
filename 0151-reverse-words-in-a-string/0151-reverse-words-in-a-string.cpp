class Solution {
public:
    string reverseWords(string s) {
        string ans,temp="";
        int i=s.length()-1;
        while(i>=0){
            while(i>=0 && s[i]==' ')
                i--;
            int end=i;
            cout<<end<<endl;
            while(i>=0 && s[i]!=' ')
                i--;
            cout<<i+1<<endl;
            temp=s.substr(i+1,end-i);
            cout<<temp<<endl;
            if(!temp.empty()){
                if(!ans.empty())
                    ans+=' ';
                ans+=temp;
            }
            temp="";
        }
        return ans;
    }
};