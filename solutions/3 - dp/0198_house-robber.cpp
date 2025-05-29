class Solution {
public:
    int rob(vector<int>& nums) {

        int dp_n_1 = 0; // dp(n-1)
        int dp_n_2 = 0; // dp(n-2)
        int dp_n;

        for(auto& num : nums) {
            dp_n = max(dp_n_1, dp_n_2 + num);
            dp_n_2 = dp_n_1;
            dp_n_1 = dp_n;
        }
        
        return dp_n;
    }
};