bool isValid(char* s) {
    char stack[1000000];
    int position = -1;
    while (*s) {
        if (')' == *s) {
            if (position >= 0 && stack[position] == '(') 
                position--;
            else 
                return false;
        }
        else if ('}' == *s) {
            if (position >= 0 && stack[position] == '{') 
                position--;
            else
                return false;
        }
        else if (']' == *s) {
            if (position >= 0 && stack[position] == '[') 
                position--;
            else 
                return false;
        }
        else
            stack[++position] = *s;
        s++;
    }
    return (-1 == position); // check position
}
