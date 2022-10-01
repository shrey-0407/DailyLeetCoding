class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int b=0,e=0,d=0,c=0;
        vector<int>mp(128,0);
        
        while(e<s.size()){
            if(mp[s[e++]]++>0) c++;
            
            while(c>0) {if(mp[s[b++]]-->1) c--;}
            d=max(d,e-b);
        }
        return d;
    }
};