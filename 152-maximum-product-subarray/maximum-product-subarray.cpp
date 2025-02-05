class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int k = 1 , j = 1;
        int res = nums[0];
        for(int i=0;i<n;i++){
            int n = nums[i];
            int temp = k*n;
            k= max(max(n*k,n*j),n);
            j= min(min(temp,n*j),n);
            res = max(res,k);
        }
        return res;
    }
};