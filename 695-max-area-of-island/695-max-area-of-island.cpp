class Solution {
public:
    
    
    int dfs(vector<vector<int>>& g,int i,int j){
     if(i<0 || j<0 || i>=g.size() || j>=g[0].size() || g[i][j]==0) return 0;
        g[i][j]=0;
        return 1+dfs(g,i+1,j)+dfs(g,i-1,j)+dfs(g,i,j+1)+dfs(g,i,j-1);
    }
    
    int maxAreaOfIsland(vector<vector<int>>& g) {
        int mx=0,ans=0;
        for(int i=0;i<g.size();i++){
            for(int j=0;j<g[0].size();j++){
                if(g[i][j]==1){
                    ans=dfs(g,i,j);
                    mx=max(mx,ans);
                }
            }
        }
        return mx;
    }
};