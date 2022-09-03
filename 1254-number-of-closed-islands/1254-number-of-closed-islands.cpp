class Solution {
public:
    int closedIsland(vector<vector<int>>& g) {
        int res=0;
        for(int i=0;i<g.size();i++){
            for(int j=0;j<g[0].size();j++){
                if(g[i][j]==0){
                    res+=dfs(g,i,j) ? 1 : 0;
                }
            }
        }
        return res;
    }
    
    bool dfs(vector<vector<int>>& g,int i,int j){
        if(i<0 || j<0 || i==g.size() || j==g[0].size()) return false;
        
        if(g[i][j]==1) return true;
        
        g[i][j]=1;
        
     bool p1=dfs(g,i+1,j);
     bool p2=dfs(g,i-1,j);
     bool p3=dfs(g,i,j+1);
     bool p4=dfs(g,i,j-1);
        
        
        return p1 and p2 and p3 and p4;
    }
};