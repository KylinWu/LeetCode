void moveZeroes(int* nums, int numsSize) {
    int zero = 0, nonzero = 0;
    for(nonzero; nonzero<numsSize; nonzero++){
        if(nums[nonzero] != 0){
            if(nonzero != zero){
                nums[zero++] = nums[nonzero];
                nums[nonzero] = 0;
            } else {
                zero++;
            }
        }
    }
}
