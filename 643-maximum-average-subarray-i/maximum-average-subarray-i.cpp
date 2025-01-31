class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        double sum = accumulate(nums.begin(), nums.begin() + k, 0);
        double ans = sum;
        for(int i=k;i<n;i++){
            sum+=nums[i]-nums[i-k];
            ans = max(ans,sum);
        }
        return ans/k;
    }
};