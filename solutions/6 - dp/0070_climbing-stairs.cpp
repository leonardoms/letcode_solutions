// let use a iterative solution (memoization)

// Big-O:
//  Time -> O(n)
//  Space -> O(1)
// PS.: a classic (not optmized) solution with recursion will get O(2^n) and O(n)

class Solution {
public:
    int climbStairs(int n) {

        // dp(1) = 1 step
        if( n == 1 ) return 1;

        int dp_n = 0;   // dp(n)
        int dp_n_1 = 1; // dp(n-1)
        int dp_n_2 = 1; // dp(n-2)

        for( int i = 2; i <= n; ++i ) {
            // dp(n) = dp(n - 1) + dp(n - 2)
            dp_n = dp_n_1 + dp_n_2;
            dp_n_2 = dp_n_1;
            dp_n_1 = dp_n;
        }
        
        return dp_n;
    }
};