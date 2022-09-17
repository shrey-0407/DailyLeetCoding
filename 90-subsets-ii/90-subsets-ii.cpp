class Solution {
public:
    
    void solve(vector<int>a,vector<vector<int>>&v,vector<int>op,int i){
        if(i==a.size()){
            sort(op.begin(),op.end());
            if(!count(v.begin(),v.end(),op)){
                v.push_back(op);
            }return;
        }
        
        //exclude
        
        solve(a,v,op,i+1);
        
        //include
        
        int ele=a[i];
        op.push_back(ele);
        solve(a,v,op,i+1);
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& a) {
        vector<vector<int>>v;
        vector<int>op;
        solve(a,v,op,0);
        return v;
    }
};