int titleToNumber(char* s) {
    int titleLen = strlen(s);
    int r = 0, count=0;
    for(int i=titleLen-1; i>=0; i--){
        r += (s[i]-64)*pow(26, count);
        count++;
    }
    return r;
}
