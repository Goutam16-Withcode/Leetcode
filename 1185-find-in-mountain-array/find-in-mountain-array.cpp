class Solution {
public:
    int findInMountainArray(int target, MountainArray &arr) {
        int n = arr.length();
        
        // Step 1: Find peak index
        int lo = 1, hi = n - 2, peak = 0;
        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            int midVal = arr.get(mid);
            int leftVal = arr.get(mid - 1);
            int rightVal = arr.get(mid + 1);
            if (midVal > leftVal && midVal > rightVal) {
                peak = mid;
                break;
            } else if (midVal > rightVal) {
                hi = mid - 1;
            } else {
                lo = mid + 1;
            }
        }

        // Step 2: Binary search on increasing part [0...peak]
        int left = binarySearch(arr, target, 0, peak, true);
        
        // Step 3: Binary search on decreasing part [peak+1...n-1]
        int right = binarySearch(arr, target, peak + 1, n - 1, false);
        
        // Step 4: Return minimum valid index
        if (left != -1) return left;
        return right;
    }

    // Helper binary search function
    int binarySearch(MountainArray &arr, int target, int low, int high, bool ascending) {
        while (low <= high) {
            int mid = low + (high - low) / 2;
            int midVal = arr.get(mid);
            if (midVal == target) return mid;
            if (ascending) {
                if (midVal < target) low = mid + 1;
                else high = mid - 1;
            } else {
                if (midVal > target) low = mid + 1;
                else high = mid - 1;
            }
        }
        return -1;
    }
};
