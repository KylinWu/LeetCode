bool isIncreasing(int* A, int ASize) {
    for (int i=0; i<ASize-1; i++)
        if (A[i] > A[i+1]) return false;
    return true;
}

bool isDecreasing(int* A, int ASize) {
    for (int i=0; i<ASize-1; i++)
        if (A[i] < A[i+1]) return false;
    return true;
}

bool isMonotonic(int* A, int ASize) {
    return isIncreasing(A, ASize) || isDecreasing(A, ASize);
}
