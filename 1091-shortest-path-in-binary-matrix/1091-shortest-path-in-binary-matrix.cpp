class Solution {
public:
    
    bool valid(vector<vector<int>>& g,int i,int j,int n,vector<vector<bool>>& vis){
        return (i>=0 and i<n and j>=0 and j<n and g[i][j]==0 and !vis[i][j]);
    }
    int shortestPathBinaryMatrix(vector<vector<int>>& g) {
        int n=g.size();
        vector<vector<bool>>vis(n,vector<bool>(n,false));
        
        queue<pair<int,int>>q;
        
        if(g[0][0]==0){
            q.push({0,0});
            vis[0][0]=true;
        }
        int ans=0;
        while(!q.empty()){
            int nodsize=q.size();
            ans++;
            for(int i=0;i<nodsize;i++){
                pair<int,int>fnode=q.front();
                q.pop();
                int a=fnode.first,b=fnode.second;
                if(a==n-1 and b==n-1) return ans;
                
                for(int k=a-1;k<=a+1;k++){
                    for(int l=b-1;l<=b+1;l++){
                        if(valid(g,k,l,n,vis)){
                            q.push({k,l});
                            vis[k][l]=true;
                        }
                    }
                }
            }
        }
        return -1;
    }
};