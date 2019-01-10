/* Fibonacci Series Problem
 * Approach: Bottom-up Dynamic programming
 */
int climbStairs(int n) {
    int f1 = 1;
    int f2 = 2;
    if (n == 1) return f1;
    else if (n == 2) return f2;
    
    int fn;
    for (int i=3; i<=n; i++) {
        fn = f1 + f2;
        f1 = f2;
        f2 = fn;
    }
    return fn;
}
