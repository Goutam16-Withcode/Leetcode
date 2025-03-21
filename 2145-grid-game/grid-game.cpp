class Solution {
public:
    long long gridGame(vector<vector<int>>& grid) {
  
        // prefix sum
        long long top = grid[0][0],bottom = 0, answer = LONG_MAX;
        for(int i =1;i<grid[0].size();i++){
            top += grid[0][i];
        }

        for(int i =0;i<grid[0].size();i++){
            // All the top points 2nd robot can collect
            top -= grid[0][i];

            // min because first robot wants to  minimize 
            answer = min(answer,max(top,bottom));

            // All the bootom points the robot could collect
            bottom += grid[1][i];
        }

        return answer;
    }
};