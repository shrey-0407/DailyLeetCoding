class Solution {
public:
    
    
    void dfs(vector<vector<int>>&g,vector<bool>&vis,int i){
        vis[i]=true;
        for(int j=0;j<g.size();j++){
            if(g[i][j]==1 and !vis[j]) dfs(g,vis,j);
        }
    }
    
    int findCircleNum(vector<vector<int>>& g) {
        int n=g.size();
        if(n==0) return 0;
        vector<bool>vis(n,false);
        int ans=0;
        for(int i=0;i<n;i++){
            if(!vis[i]){
                ans++;
                dfs(g,vis,i);
            }
        }
        return ans;
    }
};