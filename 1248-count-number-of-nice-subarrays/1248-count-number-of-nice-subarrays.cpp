class Solution {
public:
    int numberOfSubarrays(vector<int>& a, int k) {
        unordered_map<int,int>mp;
        
        for(int i=0;i<a.size();i++){
            if(a[i]&1) a[i]=1;
            else a[i]=0;
        }
        int s=0,c=0;
        for(int i=0;i<a.size();i++){
            s+=a[i];
            if(s==k) c++;
            
            if(mp.find(s-k)!=mp.end()) c+=mp[s-k];
            
            mp[s]++;
        }
        return c;
    }
};