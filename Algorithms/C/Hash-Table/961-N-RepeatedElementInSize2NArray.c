int repeatedNTimes(int* A, int ASize) {
    int N = ASize/2;
    int foundTimes;
    for (int i=0; i<ASize; i++) {
        foundTimes = 0;
        for (int j=i; j<ASize; j++) {
            if (A[j] == A[i]) {
                foundTimes++;
            }
        }
        if (foundTimes == N) {
            return A[i];
        }
    }
    return 0;
}
