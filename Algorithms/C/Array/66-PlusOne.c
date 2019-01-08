/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize) {
    int length = digitsSize - 1;
    int sum = 0, carry = 0;
    int* result = (int*)malloc(sizeof(int) * digitsSize);
    for (int i = length; i>=0; i--) {
        if (i == length)
            sum = digits[i] + 1;
        else if (carry)
            sum = digits[i] + carry;
        else
            sum = digits[i];
        carry = sum / 10;
        sum %= 10;
        result[i] = sum;
    }
    if (carry) {
        result = (int*)realloc(result, sizeof(int) * (digitsSize + 1));
        // number move forward
        for (int i = digitsSize; i>0; i--) {
            result[i] = result[i-1];
        }
        result[0] = carry;
        *returnSize = digitsSize + 1;
    } 
    else 
        *returnSize = digitsSize;
    return result;
}
