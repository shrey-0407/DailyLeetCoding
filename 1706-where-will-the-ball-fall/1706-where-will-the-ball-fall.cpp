class Solution {
public:
    vector<int>ans;
    void dfs(int i,int j,vector<vector<int>>& g,int stind){
        if(i==g.size()){
            ans[stind]=j;
            return;
        }
        
        if(g[i][j]==1){
            if(j+1<g[0].size() and g[i][j+1]==1){
                dfs(i+1,j+1,g,stind);
            }
        }
        else if(g[i][j]==-1){
            if(j-1>=0 and g[i][j-1]==-1){
                dfs(i+1,j-1,g,stind);
            }
        }
    }
    
    vector<int> findBall(vector<vector<int>>& g) {
        ans.resize(g[0].size(),-1);
        for(int j=0;j<g[0].size();j++){
            dfs(0,j,g,j);
        }
        return ans;
    }
};