class Solution {
public:
    bool isCycle(int node, vector<vector<int>>& edges, vector<bool>&vis,vector<bool>&recPath){
        vis[node]=true;
        recPath[node]=true;
        for(int i=0;i<edges.size();i++){
            int u=edges[i][0];
            int v=edges[i][1];
            if(u==node){
                if(!vis[v]){
                    if(isCycle(v,edges,vis,recPath)){
                        return true;
                    }
                }
                else if(recPath[v]) return true;
            }
        }recPath[node]=false;
        return false;
    }
    bool canFinish(int V, vector<vector<int>>& edges) {
        vector<bool>recPath(V,false);
        vector<bool>vis(V,false);
        for(int i=0;i<V;i++){
            if(isCycle(i,edges,vis,recPath)){
                return false;
            }
        }return true;
    }
};