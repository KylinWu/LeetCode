/*  169. Majority Element
 *
 *  Apporach: The majority element is a middle element of the sorted input array.
 * */

int cmp(const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

int majorityElement(int* nums, int numsSize) {
    qsort(nums, numsSize, sizeof(int), cmp);
    return nums[numsSize/2];
}
