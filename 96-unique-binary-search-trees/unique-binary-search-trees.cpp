class Solution {
public:
vector<int>dp;
int totalTree(int n,vector<int>&dp){
    if(n<=1) return 1;
    int total = 0;
    if(dp[n]!=-1) return dp[n];
    for(int i=1;i<=n;i++){
        int left = totalTree(i-1,dp);
        int right = totalTree(n-i,dp);
        total+=left*right;
    }
    return dp[n] = total;
}
    int numTrees(int n) {
        dp.resize(n+1,-1);
        return totalTree(n,dp);
    }
};