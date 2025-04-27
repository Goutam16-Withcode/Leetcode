class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n = arr.size();
        int lo = 1;
        int hi  = n-2;
        int ans = 0;
        while(lo<=hi){
            int i = lo+(hi-lo)/2;
            if(arr[i]>arr[i-1] && arr[i]>arr[i+1]) {
                ans = i;
                break;
            }
            else if (arr[i] > arr[i+1]) hi = i - 1;
            else lo = i + 1;
        }
        return ans;
    }
};