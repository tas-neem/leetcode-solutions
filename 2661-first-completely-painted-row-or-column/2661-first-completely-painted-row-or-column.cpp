class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
        unordered_map<int,pair<int,int>> mp;
        int m=mat.size(),n=mat[0].size();
        vector<int> row(m,0),col(n,0);
        for(int i=0;i<m;i++){
            for(int j=0;j<m;j++)
                mp[mat[i][j]]={i,j};
        }
        for(int i=0;i<arr.size();i++){
            int r=mp[arr[i]].first,c=mp[arr[i]].second;
            row[r]++;
            col[c]++;
            if(row[r]==n || col[c]==m)
                return i;
        }
        return -1;
    }
};