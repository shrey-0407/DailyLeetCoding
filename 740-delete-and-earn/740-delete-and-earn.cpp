class Solution {
public:
    int deleteAndEarn(vector<int>& a) {
        int dp[20005];
        vector<int>freq(20005);
        int mx=*max_element(a.begin(),a.end());
        for(auto i:a) freq[i]++;
        
        dp[1]=freq[1];
        dp[2]=max(dp[1],freq[2]*2);
        
        for(int i=3;i<=mx;i++){
            dp[i]=max(dp[i-1],dp[i-2]+freq[i]*i);
        }
        return dp[mx];
    }
};