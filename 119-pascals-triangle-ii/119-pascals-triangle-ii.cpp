class Solution {
public:
    vector<int> getRow(int n) {
      vector<int>v(n+1,0);
        v[0]=1;
        for(int i=0;i<n+1;i++){
            for(int j=i;j>=1;j--){
                v[j]+=v[j-1];
            }
        }
        return v;
        
    }
};