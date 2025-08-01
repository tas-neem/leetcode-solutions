class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        vector<vector<int>> res=image;
        vector<vector<int>> dir={{-1,0},{0,1},{0,-1},{1,0}};
        queue<pair<int,int>> q;
        vector<vector<int>> vis(image.size(),vector<int>(image[0].size(),0));
        q.push({sr,sc});
        vis[sr][sc]=1;
        res[sr][sc]=color;
        int initcolor=image[sr][sc];
        while(!q.empty()){
            pair<int,int> p=q.front();
            q.pop();
            for(auto& d:dir){
                int i=p.first+d[0];
                int j=p.second+d[1];
                if(i<0||j<0||i>=image.size()||j>=image[0].size()||image[i][j]!=initcolor||vis[i][j]==1)
                    continue;
                res[i][j]=color;
                q.push({i,j});
                vis[i][j]=1;
            }
        }
        return res;
    }
};