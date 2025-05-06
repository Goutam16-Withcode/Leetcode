class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        vector<int>res(n);
        for(int i=0;i<n;i++){
            if(nums[i]%2==0){
                res[i] = 0;
            }
            else{
                res[i] = 1;
            }
        }
        sort(res.begin(),res.end());
        return res;
    }
};