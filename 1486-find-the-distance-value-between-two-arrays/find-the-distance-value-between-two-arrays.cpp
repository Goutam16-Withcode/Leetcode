class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int n = arr1.size();
        int m = arr2.size();
        sort(arr1.begin(),arr1.end());
        sort(arr2.begin(),arr2.end());
        int count =0;
        for(int i=0;i<n;i++){
             bool valid = true;
            for(int j=0;j<m;j++){
                int mini = abs(arr1[i]-arr2[j]);
                if(mini<=d){
                   valid = false;
                    break;
                } 
            }
            if(valid) count++;
        }
        return count;
    }
};