class Solution {
public:
    void solve(int i, int j, vector<vector<char>>& grid, vector<vector<bool>>&vis){
        if(i>=grid.size()||j>=grid[0].size()||i<0||j<0||vis[i][j]||grid[i][j]!='1') return;
        vis[i][j]=true;
        solve(i+1,j,grid,vis);
        solve(i-1,j,grid,vis);
        solve(i,j+1,grid,vis);
        solve(i,j-1,grid,vis);
    }
    int numIslands(vector<vector<char>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int island=0;
        vector<vector<bool>>vis(m,vector<bool>(n,false));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]=='1' && !vis[i][j]){
                    solve(i,j,grid,vis);
                    island++;
                }
            }
        }return island;
    }
};
