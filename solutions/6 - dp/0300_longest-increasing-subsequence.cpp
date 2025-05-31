class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        if( n <= 1 )
            return 1;

        // dp[i] = length of LIS ending at index i
        std::vector<int> dp( n, 1 ); 

        for( int i = 1; i < n; ++i ) {
            // Check all elements before index i
            for( int j = 0; j < i; ++j ) {
                // If nums[j] < nums[i], nums[i] can extend the LIS ending at j
                if (nums[j] < nums[i])
                    // Update dp[i] if we find a longer subsequence
                    dp[i] = std::max( dp[i], dp[j] + 1 );
            }
        }

        return *std::max_element(dp.begin(), dp.end());
    }
};