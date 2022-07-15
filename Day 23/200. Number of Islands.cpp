class Solution {
public:
    int dx[4]={0,0,1,-1};
    int dy[4]={1,-1,0,0};
    
    bool vis[301][301];
    
    void dfs(vector<vector<char>>& grid,int x,int y)
    {
        int n=grid.size();
        int m=grid[0].size();
        
        vis[x][y]=true;
        
        for(int j=0;j<4;j++)
        {
            int cx=x+dx[j];
            int cy=y+dy[j];
            
            if(cx>=0 && cx<n && cy>=0 && cy<m && grid[cx][cy]=='1' && vis[cx][cy]==false)
                dfs(grid,cx,cy);
        }
    }
    
    int numIslands(vector<vector<char>>& grid) {
        memset(vis,false,sizeof(vis));
        
        int cnt=0;
        
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]=='1' && vis[i][j]==false)
                {
                    dfs(grid,i,j);
                    cnt++;
                }
            }
        }
        
        return cnt;
        
    }
};
