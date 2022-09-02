class Solution {
public:
    int rob(vector<int>& v) {
        int a=0,b=0,n=v.size();
        if(n==1) return v[0];
        vector<int>dp(n+2,0);
        for(int i=n-2;i>=0;i--){
            dp[i]=max(dp[i+1],dp[i+2]+v[i]);
        }
        a=dp[0];
        dp.clear();
        for(int i=n-1;i>=1;i--){
            dp[i]=max(dp[i+1],dp[i+2]+v[i]);
        }
        b=dp[1];
        return max(a,b);
    }
};