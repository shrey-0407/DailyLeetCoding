class Solution {
public:
    
    void dfs(vector<vector<int>>& m,vector<bool>&vis,int i){
        vis[i]=true;
        
        for(int j=0;j<m.size();j++){
            if(m[i][j]==1 and !vis[j]){
                dfs(m,vis,j);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& m) {
        int n=m.size(),ans=0;
        if(n==0) return 0;
        
        vector<bool>vis(n,false);
        for(int i=0;i<n;i++){
            if(!vis[i]){
                ans++;
                dfs(m,vis,i);
            }
        }
        return ans;
    }
};