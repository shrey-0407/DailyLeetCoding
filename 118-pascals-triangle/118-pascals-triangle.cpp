class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>>p;
        for(int i=0;i<n;i++){
            vector<int>r(i+1,1);
            for(int j=1;j<i;j++){
                r[j]=p[i-1][j]+p[i-1][j-1];
            }
            p.push_back(r);
        }
        return p;
    }
};