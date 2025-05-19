class Solution {
public:
    string triangleType(vector<int>& nums) {
        int n = nums.size();
        int a = nums[0] , b = nums[1], c = nums[2];
        if (a + b <= c || a + c <= b || b + c <= a)
            return "none";
        if (a==b and b==c) return "equilateral";
        else if (a == b || b == c || a == c)
            return "isosceles";
        else
            return "scalene";
    }
};