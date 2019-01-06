char* reverseString(char* s) {
    int lenght = strlen(s);
    char tmp;
    for (int i=0; i< lenght/2; i++) {
        //swap
        tmp = *(s+i);
        *(s+i) = *(s+lenght-i-1);
        *(s+lenght-i-1) = tmp;
    }
    return s;
}
