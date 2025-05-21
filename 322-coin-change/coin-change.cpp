class Solution {
public:
vector<int>dp;
    int f(int x,vector<int>& coin){
    if(x==0) return 0;
       if(dp[x]!=-2) return dp[x];
       int result = INT_MAX;
       for(int i=0;i<coin.size();i++){
              if(x-coin[i]<0) continue;
              result = min(result,f(x-coin[i],coin));
       }
       if(result==INT_MAX) return dp[x] = INT_MAX;
       return dp[x] = 1 + result;
    }
    int coinChange(vector<int>& coin, int x) {
        dp.resize(1000006, -2);
        int ans = f(x,coin);
       if(ans==INT_MAX) return -1;
       else return ans;
    }
};