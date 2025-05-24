class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
         vector<vector<int>> ans(n, vector<int>(m, 0));
        vector<int> oneRow(n, 0), oneCol(m, 0);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 1) {
                    oneRow[i]++;
                    oneCol[j]++;
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                 int zeroRow = m - oneRow[i];
                int zeroCol = n - oneCol[j];
                ans[i][j]=oneRow[i]+oneCol[j]-zeroRow-zeroCol;
            }
        }
        return ans;
    }
};