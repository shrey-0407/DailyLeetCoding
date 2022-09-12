class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int p=1;
        int n=nums.size();
        
        for(int i=1;i<n;i++){
            if(nums[i]!=nums[i-1]){
                nums[p++]=nums[i];
            }
        }
        return p;
    }
};