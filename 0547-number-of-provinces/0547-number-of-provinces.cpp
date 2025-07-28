class Solution {
private:
    void bfs(int node,vector<int>& vis, vector<vector<int>> isConnected){
        queue<int> q;
        q.push(node);
        vis[node]=1;
        while(!q.empty()){
            int front=q.front();
            q.pop();
            for(int i=0;i<isConnected[front].size();i++){
                if(isConnected[front][i]==1 && !vis[i]){
                    vis[i]=1;
                    q.push(i);
                }
            }
        }
    }
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int count=0;
        int V=isConnected.size();
        vector<int> vis(V, 0);
        for(int i=0;i<V;i++){
            if(!vis[i]){
                bfs(i,vis,isConnected);
                count++;
            }
        }
        return count;
    }
};