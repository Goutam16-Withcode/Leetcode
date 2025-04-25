class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& v) {
        int n = v.size();
        int m = v[0].size();
        vector<vector<int>>res(m, vector<int>(n, 0));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
               res[i][j] = v[j][i];
            }
        }
        return res;
    }
};