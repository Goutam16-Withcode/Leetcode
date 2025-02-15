class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        int res;
        unordered_map<int , int > freq;
        for(int i=0;i<n;i++){
            freq[nums[i]]++;
        }
        for(auto &entry : freq){
            if(entry.second>1){
                res = entry.first;
            }
        }
        return res;
    }
};