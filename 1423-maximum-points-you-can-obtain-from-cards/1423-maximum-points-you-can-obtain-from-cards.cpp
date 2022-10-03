class Solution {
public:
    int maxScore(vector<int>& c, int k) {
        int s=0,mx=0;
        for(int i=0;i<k;i++) s+=c[i];
        int cur=s;
        for(int i=k-1;i>=0;i--){
            cur-=c[i];
            cur+=c[c.size()-k+i];
            
            s=max(s,cur);
        }
        return s;
    }
};