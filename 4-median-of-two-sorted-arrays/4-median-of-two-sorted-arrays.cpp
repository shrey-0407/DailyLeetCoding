class Solution {
public:
    double findMedianSortedArrays(vector<int>& a1, vector<int>& a2) {
        vector<double>v;
        for(int i=0;i<a1.size();i++){
            v.push_back(a1[i]);
        }
        for(int i=0;i<a2.size();i++){
            v.push_back(a2[i]);
        }
        sort(v.begin(),v.end());
        int n= v.size()-1;
        if(v.size()%2==0) return (v[n/2]+v[(n/2)+1])/2;
        else return v[n/2];
    }
};