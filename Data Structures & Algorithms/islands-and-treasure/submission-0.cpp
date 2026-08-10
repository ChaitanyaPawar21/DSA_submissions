class Solution {
public:
    void islandsAndTreasure(vector<vector<int>>& grid) {
       queue<pair<pair<int,int>,int>>q;
       int m=grid.size();
       int n=grid[0].size();
       vector<vector<bool>>vis(m,vector<bool>(n,false));
       for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(grid[i][j]==0){
                q.push({{i,j},0});
            }
            if(grid[i][j]==-1){
                vis[i][j]=true;
            }
        }
       }
       while(!q.empty()){
        int x=q.front().first.first;
        int y=q.front().first.second;
        int step=q.front().second;
        q.pop();
        if(x-1>=0 && !vis[x-1][y] && grid[x-1][y]==2147483647){
            grid[x-1][y]=min(step+1,grid[x-1][y]);
            q.push({{x-1,y},grid[x-1][y]});
            vis[x-1][y]=true;
        }
        if(x+1<m && !vis[x+1][y] && grid[x+1][y]==2147483647){
            grid[x+1][y]=min(step+1,grid[x+1][y]);
            q.push({{x+1,y},grid[x+1][y]});
            vis[x+1][y]=true;
        }
        if(y+1<n && !vis[x][y+1] && grid[x][y+1] ==2147483647){
            grid[x][y+1] =min(step+1,grid[x][y+1] );
            q.push({{x,y+1 },grid[x][y+1] });
            vis[x][y+1] =true;
        }
        if(y-1>=0 && !vis[x][y-1] && grid[x][y-1]==2147483647){
            grid[x][y-1]=min(step+1,grid[x][y-1]);
            q.push({{x,y-1},grid[x][y-1]});
            vis[x][y-1]=true;
        }
       }
       return;
    }
};
