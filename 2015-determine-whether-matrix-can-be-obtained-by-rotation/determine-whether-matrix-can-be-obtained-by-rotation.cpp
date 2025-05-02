class Solution {
public:
    void rotate90(vector<vector<int>>& mat) {
        int n = mat.size();
        for(int i = 0; i < n; ++i){
            for(int j = i + 1; j < n; ++j){
                swap(mat[i][j], mat[j][i]);
            }
        }
        for(int i = 0; i < n; ++i){
            reverse(mat[i].begin(), mat[i].end());
        }
    }

    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        for(int i = 0; i < 4; ++i){
            if(mat == target) return true;
            rotate90(mat);
        }
        return false;
    }
};
