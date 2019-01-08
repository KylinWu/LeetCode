int searchInsert(int* nums, int numsSize, int target) {
    int start = 0, end = numsSize-1;
    while (start <= end) {
        int mid = (start + end) >> 1;
        if (target == nums[mid])
            return mid;
        else if (target > nums[mid])
            start = mid + 1;
        else
            end = mid - 1;
    }
    return start;
}
