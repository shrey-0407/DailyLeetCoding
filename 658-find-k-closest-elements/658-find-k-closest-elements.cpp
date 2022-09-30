class Solution {
public:
    vector<int> findClosestElements(vector<int>& a, int k, int x) {
        priority_queue<pair<int,int>>pq;
        for(int i=0;i<a.size();i++){
            pq.push({abs(a[i]-x),a[i]});
            if(pq.size()>k)
                  pq.pop();
        }
        vector<int>ans;
        while(pq.size()>0){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        sort(begin(ans),end(ans));
        return ans;
    }
};