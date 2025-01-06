class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        map<vector<int>,int> mp;
        int ans=0;
        for(int i=0;i<grid.size();i++){
            vector<int> v;
            for(int j=0;j<grid[0].size();j++){
                v.push_back(grid[i][j]);
            }
            mp[v]++;
        }
        for(int i=0;i<grid.size();i++){
            vector<int> v1;
            for(int j=0;j<grid[0].size();j++){
                v1.push_back(grid[j][i]);
            }
            if(mp.find(v1)!=mp.end()){
                ans+=mp[v1];
            }
        }
        return ans;
    }
};