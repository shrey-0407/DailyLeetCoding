class Solution {
public:
    
    int dir[5]={1,0,-1,0,1};
    int minimumEffortPath(vector<vector<int>>& h) {
        int m=h.size(),n=h[0].size();
        
        priority_queue<vector<int>,vector<vector<int>>,greater<vector<int>>>q;
        q.push({0,0,0});
        
        while(!q.empty()){
            vector<int>v=q.top();
            q.pop();
            
            int eff=v[0],x=v[1],y=v[2];
            if(x==m-1 and y==n-1) return eff;
            
            if(x<0 || y<0 || x>=m || y>=n || h[x][y]==0) continue;
            
            for(int i=0;i<4;i++){
                int nx=x+dir[i],ny=y+dir[i+1];
                
                if(nx<=m-1 and ny<=n-1 and nx>=0 and ny>=0){
                    q.push({max(eff,abs(h[x][y]-h[nx][ny])),nx,ny});
                }
            }
            h[x][y]=0;            
        }
        return 0;
    }
};