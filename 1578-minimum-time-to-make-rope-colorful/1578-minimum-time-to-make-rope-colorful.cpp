class Solution {
public:
    int minCost(string s, vector<int>& t) {
        int mn=0,ans=0;
        
        for(int i=1;i<t.size();i++){
            if(s[i]==s[i-1]){
                mn=mn+min(t[i],t[i-1]);
                t[i]=max(t[i],t[i-1]);
            }
        }
        return mn;
    }
};