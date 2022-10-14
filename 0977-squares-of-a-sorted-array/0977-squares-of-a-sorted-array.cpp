class Solution {
public:
    vector<int> sortedSquares(vector<int>& a) {
        vector<int>res(a.size());
        int i=0,j=a.size()-1;
        for(int k=a.size()-1;k>=0;k--){
            if(abs(a[i])<abs(a[j])) {res[k]=a[j]*a[j]; j--;}
            else {res[k]=a[i]*a[i];i++;}
        }
        return res;
        
    }
};