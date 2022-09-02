class Solution {
public:
    bool canJump(vector<int>& a) {
        int mx=0;
        for(int i=0;i<a.size();i++){
            if(mx<i) return false;
            mx=max(mx,a[i]+i);
        }
        return true;
        
    }
};