class Solution {
public:
    string largestOddNumber(string num) {
        string ans="";
        for(int i=num.length()-1;i>=0;i--){
            if((num[i]-'0')%2!=0){
                while(i>=0){
                    ans+=num[i--];
                }
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};