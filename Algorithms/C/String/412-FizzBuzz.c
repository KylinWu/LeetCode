/* 412. Fizz Buzz
 * Approach: Straight Forward
 */

/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** fizzBuzz(int n, int* returnSize) {
    char** result = (char**)malloc(sizeof(char*) * n);
    *returnSize = n;
    for (int i=0; i<n; i++) {
        if ((i+1) % 15 == 0) {
            result[i] = (char*)malloc(sizeof(char) * 9);
            sprintf(result[i], "%s", "FizzBuzz");
        }
        else if ((i+1) % 3 == 0) {
            result[i] = (char*)malloc(sizeof(char) * 5);
            sprintf(result[i], "%s", "Fizz");
        }
        else if ((i+1) % 5 == 0) {
            result[i] = (char*)malloc(sizeof(char) * 5);
            sprintf(result[i], "%s", "Buzz");
        }
        else {
            result[i] = (char*)malloc(sizeof(char) * 2);
            sprintf(result[i], "%d", i+1);
        }
    }
    return result;
}
