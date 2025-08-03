class Solution {
public:
    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
        queue<vector<int>> q;
        vector<vector<int>> dirs={{-1,0},{1,0},{0,-1},{0,1}};
        int n=maze.size(),m=maze[0].size();
        q.push({entrance[0],entrance[1],0});
        maze[entrance[0]][entrance[1]]='+';
        while(!q.empty()){
            auto it=q.front();
            q.pop();
            int i=it[0];
            int j=it[1];
            int step=it[2];
            if((i!=entrance[0]||j!=entrance[1])&&(i==0||i==n-1||j==0||j==m-1))
                return step;
            for(auto& d:dirs){
                int x=i+d[0];
                int y=j+d[1];
                if(x>=0 && y>=0 && x<n && y<m && maze[x][y]!='+'){
                    q.push({x,y,step+1});
                    maze[x][y]='+';
                }
            }
        }
        return -1;
    }
};