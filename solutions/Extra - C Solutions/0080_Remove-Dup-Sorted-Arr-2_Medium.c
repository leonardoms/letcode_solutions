int removeDuplicates(int* nums, int numsSize) {
    int k = 0, count = 2;

    if( numsSize < 1 )
        return 0;

    for(int i = 1; i < numsSize; i++) {
        if( nums[i] != nums[k] ) {
            count = 2;
        }

        k += (count >> 1) > 0;
        nums[k] = nums[i];
    }

    return k + 1;
}