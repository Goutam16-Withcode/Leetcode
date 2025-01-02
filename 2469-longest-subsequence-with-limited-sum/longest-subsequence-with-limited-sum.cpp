class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& que) {
        int n = nums.size();
        int m = que.size();
        vector<int> ans(m);
        sort(nums.begin(),nums.end());
        for(int i=1;i<n;i++){
            nums[i]+=nums[i-1];
        }
        for(int i=0;i<m;i++){
            int mlen = 0;
            int lo=0;
            int hi = n-1;
            while(lo<=hi){
                int mid = lo + (hi-lo)/2;
                if(nums[mid]>que[i]) hi = mid-1;
                else{
                    mlen = mid+1;
                    lo =mid+1;
                }
            }
            ans[i] = mlen;
        }
        return ans;
    }
};

// class Solution {
// public:
//     vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
//         sort(nums.begin(), nums.end());
//         partial_sum(nums.begin(), nums.end(), nums.begin());
//         for (int& q : queries) {
//             q = upper_bound(nums.begin(), nums.end(), q) - nums.begin();
//         }
//         return queries;
//     }
// };