class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int res = 0;
        int maxEnd = nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]<=nums[i-1]){
                res = max(res,maxEnd);
                maxEnd = 0;
            }
            maxEnd+=nums[i];
        }
        return max( res,maxEnd);
    }
};