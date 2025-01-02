// class Solution {
// public:
//     vector<int> answerQueries(vector<int>& nums, vector<int>& que) {
//         int n = nums.size();
//         int m = que.size();
//         vector<int> ans(m);
//         sort(nums.begin(),nums.end());
//         for(int i=1;i<n;i++){
//             nums[i]+=nums[i-1];
//         }
//         for(int i=0;i<m;i++){
//             int len = 0;
//             for(int j=0;j<n;j++){
//                if(nums[j]>que[i]) break;
//                len++;
//             }
//             ans[i] = len;
//         }
//         return ans;
//     }
// };

class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        sort(nums.begin(), nums.end());
        partial_sum(nums.begin(), nums.end(), nums.begin());
        for (int& q : queries) {
            q = upper_bound(nums.begin(), nums.end(), q) - nums.begin();
        }
        return queries;
    }
};