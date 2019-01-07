/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* fairCandySwap(int* A, int ASize, int* B, int BSize, int* returnSize) {
    *returnSize = 2;
    int* result = (int*)malloc(sizeof(int) * 2);
    int Sa = 0, Sb = 0;
    for (int i=0; i<ASize; i++)
        Sa += A[i];
    for (int i=0; i<BSize; i++)
        Sb += B[i];
    int delta = (Sb - Sa) / 2;
    
    for (int i=0; i<BSize; i++) {
        for (int j=0; j<ASize; j++) {
            if (B[i] == A[j] + delta) {
                result[0] = A[j];
                result[1] = B[i];
                return result;
            }
        }
    }
    return NULL;
}
