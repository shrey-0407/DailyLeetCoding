class Solution {
public:
    vector<int> twoSum(vector<int>& a, int t) {
        map<int,int>mp;
        for(int i=0;i<a.size();i++){
            if(mp.find(t-a[i])!=mp.end()){
                return {mp[t-a[i]],i};
            }
            mp[a[i]]=i;
        }
        return {};
    }
};