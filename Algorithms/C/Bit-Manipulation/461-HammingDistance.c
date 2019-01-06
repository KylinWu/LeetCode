int hammingDistance(int x, int y) {
    int xor = x^y;
    int distance = 0;
    
    while (xor) {
        if ((xor>>1)<<1 != xor) 
            distance++;
        xor>>=1;
    }
    return distance;
}
