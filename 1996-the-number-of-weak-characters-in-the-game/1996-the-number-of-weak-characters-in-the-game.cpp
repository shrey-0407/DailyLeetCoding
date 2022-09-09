class Solution {
public:
    
    static bool comp(vector<int> &a,vector<int> &b){
        if(a[0]!=b[0])
            return a[0]>b[0];
        return a[1]<b[1];
    }
    
    int numberOfWeakCharacters(vector<vector<int>>& p) {
        sort(p.begin(),p.end(),comp);
        
        int ans=0,mx=INT_MIN;
        
        for(auto it:p){
            if(mx>it[1]) ans++;
            else mx=it[1];
        }
        return ans;
        
    }
};