class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
       string ans;
        sort(s.begin(),s.end());
        string a=s[0];
        string b=s[s.size()-1];
        
        for(int i=0;i<a.size();i++){
            if(a[i]==b[i]){
                ans+=a[i];
            }else break;
        }
        return ans;
    }
};