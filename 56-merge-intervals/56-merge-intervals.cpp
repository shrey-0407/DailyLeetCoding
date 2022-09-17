class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& t) {
       
        sort(begin(t),end(t));
         int s=t[0][0];
        int e=t[0][1];
        vector<vector<int>>v;
        for(int i=1;i<t.size();i++){
            if(t[i][0]<=e){
                e=max(e,t[i][1]);
            }
            else{
                v.push_back({s,e});
                s=t[i][0];
                e=t[i][1];
            }
        
        }
        v.push_back({s,e});
        return v;
    }
};