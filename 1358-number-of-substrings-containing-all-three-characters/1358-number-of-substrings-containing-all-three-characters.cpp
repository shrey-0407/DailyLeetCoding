class Solution {
public:
    int numberOfSubstrings(string s) {
        unordered_map<char,int>mp;
        int i=0,j=0,c=0;
        for(;j<s.size();j++){
            mp[s[j]]++;
            while(mp['a'] and mp['b'] and mp['c']){
                c+=(s.size()-j);
                mp[s[i++]]--;
            }
        }
        return c;
    }
};