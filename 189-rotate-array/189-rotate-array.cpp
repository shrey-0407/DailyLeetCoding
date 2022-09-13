class Solution {
public:
    void rotate(vector<int>& a, int k) {
         k=k%a.size();
        reverse(a.begin(),a.end());
        reverse(a.begin(),a.begin()+k);
        reverse(a.begin()+k,a.end());
    }
};

// void rotate(vector<int>& nums, int k) {
//         k = k%nums.size();
//         reverse(nums.begin(), nums.end());
//         reverse(nums.begin(), nums.begin()+k);
//         reverse(nums.begin()+k, nums.end());
//     }