class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        std::vector<int> dp( amount + 1, amount + 1 ); // initialized with value > amount

        dp[0] = 0; // zero coins to amount = 0

        for( int i = 1; i <= amount; ++i ) {
            for( auto& coin : coins ) {

                if( (i - coin) >= 0 )
                    dp[i] = std::min( dp[i], dp[i - coin] + 1 ); // check minimal of coins to amount i
            }
        }

        if( dp[amount] > amount ) // if still greater (amount+1), solution not possible
            return -1;
        else
            return dp[amount];

    }
};