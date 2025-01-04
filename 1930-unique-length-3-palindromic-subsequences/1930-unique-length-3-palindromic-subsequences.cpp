class Solution {
public:
    int countPalindromicSubsequence(string s) {
        int count=0;
        unordered_map<char,vector<int>> mp;
        for(int i=0;i<s.length();i++){
            mp[s[i]].push_back(i);
        }
        for(auto it:mp){
            vector<int> v=it.second;
            if(v.size()>1){
                int min=v[0],max=v[v.size()-1];
                unordered_set<char> st;
                for(int i=min+1;i<max;i++){
                    st.insert(s[i]);
                }
                count+=st.size();
            }
        }
        return count;
    }
};