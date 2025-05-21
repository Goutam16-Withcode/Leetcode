#include <unordered_map>

class Solution {
public:
    unordered_map<long long, double> memo;

    double myPow(double x, int n) {
        long long N = n;
        if (N < 0) {
            x = 1 / x;
            N = -N;
        }
        return power(x, N);
    }

    double power(double x, long long n) {
        if (n == 0) return 1;
        if (n == 1) return x;

        if (memo.count(n)) return memo[n];

        if (n % 2 == 0) {
            double half = power(x, n / 2);
            memo[n] = half * half;
        } else {
            double half = power(x, (n - 1) / 2);
            memo[n] = x * half * half;
        }

        return memo[n];
    }
};
