class Solution {
public:
    string reverseWords(string s) {
        string res;
        if(s.size() == 0) return s;
        stack<string>st;
        for(int i=0;i<s.size();i++){
            if(s[i]==' ')continue;
            string ans;
            while(i<s.size() and s[i]!=' '){
                ans+=s[i];i++;
            }
            st.push(ans);
        }
        while(!st.empty()){
            res+=st.top();
            st.pop();
            if(!st.empty()) res+=' ';
        }
        return res;
    }
};


// if(s.size() == 0) return s;
//         stack<string> stack;
//         string result;
//         for(int i=0; i<s.size(); i++) {
//             string word;
//             if(s[i]==' ') continue; //skip spaces
//             while(i<s.size() && s[i]!=' ' ) { //store continuous letters into word
//                 word += s[i]; i++;
//             }
//             stack.push(word); //push word to the stack
//         }
//         while(!stack.empty()) {
//             result += stack.top(); stack.pop();
//             if(!stack.empty()) result += " ";
//         }
//         return result;