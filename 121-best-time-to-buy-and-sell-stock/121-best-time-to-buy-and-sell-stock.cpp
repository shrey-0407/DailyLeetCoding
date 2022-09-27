class Solution {
public:
    int maxProfit(vector<int>& a) {
        int mx=0,mn=INT_MAX;
        for(int i=0;i<a.size();i++){
            mn=min(mn,a[i]);
            mx=max(mx,a[i]-mn);
            
        }
        return mx;
    }
};