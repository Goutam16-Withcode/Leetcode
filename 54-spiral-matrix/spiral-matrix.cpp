class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int count=0;
       int m=matrix.size(); //no. of rows 
       int n=matrix[0].size();  //no. of cols
       int left=0, right=n-1, top=0, bottom=m-1;
       int total_ele=m*n;
       vector<int> v;
       while(left<=right and top<=bottom){
                 for(int j=left;j<=right;j++){
                    v.push_back(matrix[top][j]);
                 }
                 top++;

                  for(int i=top ;i<=bottom;i++){
                     v.push_back(matrix[i][right]);
                  }
                  right--;
                  if(top<=bottom){
                   for(int j=right;j>=left;j--){
                    v.push_back(matrix[bottom][j]);
                   }
                 }
                 bottom--;
                 if(left<=right){
                  for(int i=bottom;i>=top;i--){
                    v.push_back(matrix[i][left]);
                  }
                 }
                 left++;
       }
       return v;
    }
};