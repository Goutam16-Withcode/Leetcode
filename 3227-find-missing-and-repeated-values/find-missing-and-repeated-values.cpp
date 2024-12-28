
class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int> ans;
        unordered_set<int> seen;
        int repeatedValue = -1;
        int n = grid.size();
        long long actualSum = 0;
        long long expectedSum = (n * n) * (n * n + 1) / 2; // Sum of 1 to n^2
        
        // Traverse the grid
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                int value = grid[i][j];
                actualSum += value;
                if (seen.find(value) != seen.end()) {
                    repeatedValue = value; // Found the repeated value
                }
                seen.insert(value);
            }
        }
        
        // Calculate the missing value
        int missingValue = expectedSum - actualSum + repeatedValue;
        
        // Add results to the answer vector
        ans.push_back(repeatedValue);
        ans.push_back(missingValue);
        
        return ans;
    }
};
