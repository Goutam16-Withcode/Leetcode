class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
     int n = nums.size();
     int ans = 0;
     int m = nums[0];
     if(n==1) return m;
     if(nums[0]!=nums[1]) return nums[0];
     for (int i = 1; i < n; i++)
     {
       if((nums[i]!=nums[i+1]) && (nums[i]!=nums[i-1])){
              ans = nums[i];
              break;
       }
     }
     return ans;
    }
};