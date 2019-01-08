int maxSubArray(int* nums, int numsSize) {
    int tempMax = INT_MIN, max = INT_MIN, sum = 0;
    if (numsSize == 1)
        return nums[0];
    for (int i=0; i< numsSize; i++) {
        if (sum >= 0)
            sum += nums[i];
        else
            sum = nums[i];
        tempMax = sum;
        if (tempMax > max)
            max = tempMax;
    }
    return max;
}
