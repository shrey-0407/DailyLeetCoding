class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& v) {
        int c=0,d=0;
        for(int i=0;i<v.size();i++){
            if(v[i]==0) c=0;
            else{
                
                c++;
            }
            d=max(d,c);
        }
        return d;
    }
};