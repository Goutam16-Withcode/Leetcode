class Solution {
public:
   const int MOD = 1e9 + 7;

int countHousePlacements(int n) {
    long long dp0 = 1, dp1 = 2;

    for (int i = 2; i <= n; ++i) {
        long long temp = (dp0 + dp1) % MOD;
        dp0 = dp1;
        dp1 = temp;
    }

    return (dp1 * dp1) % MOD;
}
};