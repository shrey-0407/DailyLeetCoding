class Solution {
public:
    int countGoodSubstrings(string s) {
        int i=0,j=1,k=2;
        int c=0;
        while(k<s.size()){
            if(s[i]!=s[j] and s[j]!=s[k] and s[k]!=s[i]){
                c++;
            }
            i++;j++;k++;
        }
        return c;
    }
};