class Solution {
public:
    vector<int> twoSum(vector<int>& A, int target) {
        int n = A.size();
        int i = 0;
        int j = n-1;
        while(i<j){
            int total = A[i]+A[j];
            if(total==target){
                return {i+1,j+1};
            }
            else if(total>target) j--;
            else i++;
        }
        return {-1,-1};
    }
};