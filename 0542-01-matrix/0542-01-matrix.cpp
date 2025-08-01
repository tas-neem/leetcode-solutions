class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        vector<vector<int>> res(mat.size(),vector<int>(mat[0].size(),-1));
        vector<vector<int>> dir={{-1,0},{0,1},{0,-1},{1,0}};
        queue<pair<int,int>> q;
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                if(mat[i][j]==0){
                    q.push({i,j});
                    res[i][j]=0;
                }  
            }
        }
        while(!q.empty()){
            int i=q.front().first;
            int j=q.front().second;
            q.pop();
            for(auto d: dir){
                int x=i+d[0];
                int y=j+d[1];
                if(x<0||y<0||x>=mat.size()||y>=mat[0].size()||res[x][y]!=-1)
                    continue;
                res[x][y]=res[i][j]+1;
                q.push({x,y});
            }
        }
        return res;
    }
};