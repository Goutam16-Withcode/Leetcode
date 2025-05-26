class Solution {
public:
    vector<int>dp;
    int integerBreak(int n) {
        dp.resize(60,-1);
        if(n==2) return 1;
        if(n==3) return 2;
        if(dp[n]!=-1) return dp[n];
        int product = 1;
        while(n>4){
            product*=3;
            n-=3;
        }
        return  dp[n] = product*n;
    }
};