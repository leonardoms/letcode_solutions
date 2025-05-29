int removeDuplicates(int* nums, int numsSize) {
    
    int k = 0;

    for(int i = 1; i < numsSize; i++) {
        if( nums[i] == nums[k] )
            continue;
        
        nums[++k] = nums[i];
    }

    return k + 1;
}