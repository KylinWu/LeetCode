/* Approach: Dynamic Programming
 * dp(n) = max(dp(n-2) + current, dp(n-1));
 * dp(0) = 0;
 * dp(1) = nums[0];
 * dp(2) = max(nums[0], nums[1]);
 */
#define MAX(x, y) (((x) >= (y)) ? (x) : (y));

int rob(int* nums, int numsSize) {
    int result[numsSize+1];
    if (numsSize == 0) return 0;
    if (numsSize == 1) return nums[0];
    
    result[0] = 0;
    result[1] = nums[0];
    for (int i=2; i<=numsSize; i++) {
        result[i] = MAX(result[i-2] + nums[i-1], result[i-1]);
    }
    return result[numsSize];
}
