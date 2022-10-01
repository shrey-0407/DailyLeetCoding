class Solution {
public:
    int longestOnes(vector<int>& a, int k) {
        int zcnt=0,st=0,res=0;
        
        for(int e=0;e<a.size();e++){
            if(!a[e]) zcnt++;
            
            while(zcnt > k){
                if(!a[st]) zcnt--;
                st++;
            }
            
            res=max(res,e-st+1);
        }
        return res;
    }
};