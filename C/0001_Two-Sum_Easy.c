/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {

    int i, j;
    int* ret_val;

    // O(n²)
    for (i = 0; i < numsSize; i++)
        for ( j = i + 1; j < numsSize; j++ )
            if ( (nums[i] + nums[j]) == target ) {
                ret_val = (int*)malloc(sizeof(int) * 2);
                *returnSize = 2;
                ret_val[0] = i;
                ret_val[1] = j;
                return ret_val;
            }

    *returnSize = 0;
    return NULL;
}