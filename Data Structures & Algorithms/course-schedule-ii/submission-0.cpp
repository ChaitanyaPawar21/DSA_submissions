class Solution {
public:
    bool dfs(int node, vector<bool>&vis,queue<int>&st,  vector<vector<int>>& edges,vector<bool>&recPath){
        vis[node]=true;
        recPath[node]=true;
        for(int i=0;i<edges.size();i++){
            int u=edges[i][0];
            int v=edges[i][1];
            if(u==node){
                if(!vis[v])dfs(v,vis,st,edges,recPath); 
                else if(recPath[v]) return true;
            }
        }
        
        recPath[node]=false;
        st.push(node);
        return false;
        
    }
    vector<int> findOrder(int V, vector<vector<int>>& edges) {
        queue<int>st;
        vector<bool>vis(V,false);
        vector<bool>recPath(V,false);
        for(int i=0;i<V;i++){
            if(!vis[i]){
                if(dfs(i,vis,st,edges,recPath)) return {};
            }
        }
        vector<int>res;
        while(!st.empty()){
            res.push_back(st.front());
            st.pop();
        }
        if(res.size()!=V) return {};
        //reverse(res.begin(), res.end());
        return res;
    }
};