class Solution
{
    public:
        bool containsNearbyDuplicate(vector<int> &nums, int k)
        {
            unordered_set<int>seen;
            int n = nums.size();
            for (int i = 0; i < n; ++i)
            {
               if(!seen.insert(nums[i]).second) return true;
               if(i>=k) seen.erase(nums[i-k]);
            }
            return false;
        }
};