int lengthOfLastWord(char* s) {
    int length = 0;
    while (*s) {
        if (' ' == *s) {
            if (*(s+1) && *(s+1) != ' ')
                length = 0;
        } 
        else
            length++;
        s++;
    }
    return length;
}
