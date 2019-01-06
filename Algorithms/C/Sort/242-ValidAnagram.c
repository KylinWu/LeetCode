int cmp(const void* a, const void* b){
    return *(char*)a - *(char*)b;
}

bool isAnagram(char* s, char* t) {
    qsort((void*)s, strlen(s), sizeof(char), cmp);
    qsort((void*)t, strlen(t), sizeof(char), cmp);
    return (strcmp(s,t)) ? false : true;
}
