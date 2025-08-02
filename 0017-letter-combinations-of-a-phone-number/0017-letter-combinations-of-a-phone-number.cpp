class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> mp = {
            "","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"
        };
        vector<string> res;
        if(digits.length()==0) return res;
        helper(res,0,"",mp,digits);
        return res;
    }
    void helper(vector<string>& res, int i, string comb, vector<string> mp, string digits){
        if(i==digits.length()){
            res.push_back(comb);
            return;
        }
        string letters=mp[digits[i]-'0'];
        for(char l:letters){
            comb.push_back(l);
            helper(res,i+1,comb,mp,digits);
            comb.pop_back();
        }
    }
};