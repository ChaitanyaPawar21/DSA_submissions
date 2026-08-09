class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        queue<pair<pair<int,int>,int>>q;
        int m=grid.size();
        int n=grid[0].size();
        int ans=0;
        int fresh=0;
        vector<vector<bool>>vis(m,vector<bool>(n,false));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==2){
                    q.push({{i,j},0});
                }
                if(grid[i][j]==1) fresh++;
            }
        }
        while(!q.empty()){
            int i=q.front().first.first;
            int j=q.front().first.second;
            int time=q.front().second;
            q.pop();
            ans=max(ans,time);
            if(i-1>=0 && !vis[i-1][j] && grid[i-1][j]==1){
                q.push({{i-1,j},time+1});
                vis[i-1][j]=true;
                fresh--;
            }
            if(i+1<m && !vis[i+1][j] && grid[i+1][j]==1){
                q.push({{i+1,j},time+1});
                vis[i+1][j]=true;
                fresh--;
            }
            if(j-1>=0 && !vis[i][j-1] && grid[i][j-1]==1){
                q.push({{i,j-1},time+1});
                vis[i][j-1]=true;
                fresh--;
            }
            if(j+1<n && !vis[i][j+1] && grid[i][j+1]==1){
                q.push({{i,j+1},time+1});
                vis[i][j+1]=true;
                fresh--;
            }
        }if(fresh>0) return -1;
        else return ans;
    }
};
