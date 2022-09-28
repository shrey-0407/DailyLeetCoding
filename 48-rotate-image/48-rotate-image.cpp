class Solution {
public:
    void rotate(vector<vector<int>>& m) {
        for(int i=0;i<m.size();i++){
            for(int j=0;j<i;j++){
                swap(m[i][j],m[j][i]);
            }
        }
        for(int i=0;i<m.size();i++){
            reverse(begin(m[i]),end(m[i]));
        }
    }
};