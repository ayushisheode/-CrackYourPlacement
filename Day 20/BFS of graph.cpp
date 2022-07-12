class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        queue<int>q;
        vector<int>v;
        
        bool vis[V];
        memset(vis,false,sizeof(vis));
        
        q.push(0);
        vis[0]=true;
        
        while(!q.empty())
        {
            int node=q.front();
            v.push_back(node);
            q.pop();
            for(auto child:adj[node])
            {
                if(vis[child]==false)
                {
                    vis[child]=true;
                    q.push(child);
                }
            }
        }
        return v;
    }
};
