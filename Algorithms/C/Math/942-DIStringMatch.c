/*
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* diStringMatch(char* S, int* returnSize) {
    int length = strlen(S);
    *returnSize = length + 1;
    int low = 0, high = length;
    int* result = (int*)malloc(*returnSize*sizeof(int));
    
    for (int i=0, j=0; i<length; i++, j++) {
        if (S[i] == 'I') 
            result[j] = low++;
        if (S[i] == 'D') 
            result[j] = high--;
    }
    result[length] = low;
    return result;
}
