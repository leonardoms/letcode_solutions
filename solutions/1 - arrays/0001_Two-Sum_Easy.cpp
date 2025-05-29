/*
// slow O(n²) solution 
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i = 0; i < nums.size() - 1; i++ ) {
            for(int j = i + 1; j < nums.size(); j++) {
                if( nums[i] + nums[j] == target )
                    return { i, j };
            }
        }
        return { };
    }
};
*/

// O(n) with HashTable
#include <unordered_map>

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> num2index;

        for(int i = 0; i < nums.size(); i++ ) {
            int complemento = target - nums[i];

            if (num2index.count(complemento)) { // the complement of nums[i] to target ahead exists in the table?
                // if Yes, solution has been found!
                return { num2index[complemento], i };
            }

            num2index[nums[i]] = i; // save the index for the number
        }
        return { };
    }
};