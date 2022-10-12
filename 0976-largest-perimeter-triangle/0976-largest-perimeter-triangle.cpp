class Solution {
public:
    int largestPerimeter(vector<int>& a) {
        sort(begin(a),end(a));
        
        for(int i=a.size()-3;i>=0;i--){
            if(a[i]+a[i+1]>a[i+2]) return a[i]+a[i+1]+a[i+2];
        }
        return 0;
    }
};