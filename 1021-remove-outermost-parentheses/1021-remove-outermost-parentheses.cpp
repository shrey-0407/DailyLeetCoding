class Solution {
public:
    string removeOuterParentheses(string s) {
        int st=0;
        string ans;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                if(st>0){
                    ans+='(';
                }
                st++;
            }
            else{
                if(st>1){
                    ans+=')';
                }
                st--;
            }
            
        }
        return ans;
    }
};