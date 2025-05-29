class Solution {
public:
    bool canJump(vector<int>& nums) {
        int max_jump = 0;

        for (int i = 0; i < nums.size(); ++i) {
            
            // if in any moment this occur, than we cannt jump to the end of array.
            if (i > max_jump) 
                return false;

            max_jump = std::max(max_jump, i + nums[i]);
        }
        return true;
    }
};