class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    bool vis[10001];
    vector<int>res;
    
    void dfs(int node,vector<int> adj[])
    {
        vis[node]=true;
        res.push_back(node);
        
        for(auto child:adj[node])
        {
            if(vis[child]==false)
                dfs(child,adj);
        }
    }
    
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        memset(vis,false,sizeof(vis));
        
        for(int i=0;i<V;i++)
        {
            if(vis[i]==false)
                dfs(i,adj);
        }
        
        return res;
    }
};
