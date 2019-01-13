/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize) {
    int* result = (int*)malloc(sizeof(int) * numsSize);
    int index = 0;
    *returnSize = 0;
    for (int i=0; i<numsSize; i++) {
        index = abs(nums[i]) - 1;
        if (nums[index] > 0)
            nums[index] = -nums[index];
    }
    for (int i=0; i<numsSize; i++) {
        if (nums[i] > 0)
            result[(*returnSize)++] = i + 1;
    }
    return result;
}
