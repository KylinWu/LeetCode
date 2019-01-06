/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortArrayByParity(int* A, int ASize, int* returnSize) {
    int* result = (int*)malloc(ASize * sizeof(int));
    int front = 0, rear = ASize - 1;
    *returnSize = ASize;
    for (int i=0; i<ASize; i++) {
        if (A[i] % 2 == 0) {
            result[front++] = A[i];
        }
        else {
            result[rear--] = A[i];
        }
    }
    return result;
}
