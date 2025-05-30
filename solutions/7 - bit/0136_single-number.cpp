class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int value = 0;

        for( const int& num : nums )
            value ^= num; // "0 XOR num == num" and "num XOR num == 0"

        return value;
    }
};