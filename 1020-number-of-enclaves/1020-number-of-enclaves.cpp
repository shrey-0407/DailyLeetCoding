class Solution {
public:
    
    
    int dfs(vector<vector<int>>& g,int i ,int j){
        if(i<0 || j<0 || i==g.size() || j==g[0].size() || g[i][j]==0) return 0;
        
        g[i][j]=0;
        
        return 1+dfs(g,i+1,j)+dfs(g,i-1,j)+dfs(g,i,j+1)+dfs(g,i,j-1);
    }
    
    int numEnclaves(vector<vector<int>>& g) {
        int allone=0,closeone=0;
        
        for(int i=0;i<g.size();i++){
            for(int j=0;j<g[0].size();j++){
                allone+=g[i][j];
            }
        }
        
        for(int i=0;i<g.size();i++){
            for(int j=0;j<g[0].size();j++){
                if((i==0 || j==0 || i==g.size()-1 || j==g[0].size()-1) and g[i][j]==1){
                    closeone+=dfs(g,i,j);
                }
            }
        }
        return allone-closeone;
    }
};