class Solution {
public:
   
    int maxProfit(vector<int>&v,int i, vector<int>&dp){
       int n = v.size();
       if(i==n-2) return max(v[i],v[i+1]);
       if(i==n-1) return v[i];
       if(dp[i]!=-1) return dp[i];
       return  dp[i]= max(v[i]+maxProfit(v,i+2,dp),maxProfit(v,i+1,dp));
}
    int rob(vector<int>& v) {
         vector<int>dp;
        dp.resize(105,-1);
        
        return maxProfit(v,0,dp);
    }
};