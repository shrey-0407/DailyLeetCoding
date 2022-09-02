class Solution {
public:
    
    void dfs(vector<vector<int>>& im, int sr, int sc, int c,int x){
        if(sr<0 || sc<0 || sr>=im.size() || sc>=im[0].size() || im[sr][sc]!=x || im[sr][sc]==c) return;
        
        im[sr][sc]=c;
        dfs(im,sr-1,sc,c,x);
        dfs(im,sr+1,sc,c,x);
        dfs(im,sr,sc-1,c,x);
        dfs(im,sr,sc+1,c,x);
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& im, int sr, int sc, int c) {
         int x=im[sr][sc];
        dfs(im,sr,sc,c,x);
        return im;
    }
};