class Solution {
public:
    void subsets(vector<int> &arr, int n, int idx, vector<int> &current,vector<vector<int>> &result) {
    result.push_back(current); // Add current subset to result

    for (int i = idx; i < n; i++) {
        // Skip duplicates to avoid generating duplicate subsets
        if (i > idx && arr[i] == arr[i - 1]) continue;

        current.push_back(arr[i]); // Include element
        subsets(arr, n, i + 1, current, result); // Recurse with next index
        current.pop_back(); // Backtrack
    }
}
    vector<vector<int>> subsetsWithDup(vector<int>& arr) {
        int n = arr.size();
        sort(arr.begin(),arr.end());
        vector<vector<int>> result;
        vector<int> current; 
        subsets(arr, n, 0, current, result);
        return result;
    }
};