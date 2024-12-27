class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
      int n= arr.size();
      vector<int> ans;
      unordered_map<int ,int>m;
      for(int i=0;i<n;i++){
        int rem =target-arr[i];
        if(m.find(rem)!=m.end()){
           ans.push_back(m[rem]);
           ans.push_back(i);
        }
        else m[arr[i]]=i;
      }
      return ans;
    }
};