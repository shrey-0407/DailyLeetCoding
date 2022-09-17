class Solution {
public:
    int maxSubArray(vector<int>& a) {
        int mx=INT_MIN,s=0;
        for(int i=0;i<a.size();i++){
            if(s<0) s=0;
            s+=a[i];
            mx=max(mx,s);
        }
        if(mx<0){
            mx=a[0];
            for(int i=1;i<a.size();i++){
                if(mx<a[i]) mx=a[i]; 
            }
        }
        return mx;
    }
};