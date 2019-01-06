int numUniqueEmails(char** emails, int emailsSize) {
    char uniqueEmails[100][100] = {0};
    char email[100] = {0};
    int skip, i, j, k, found, uniqueEmailsSize = 0;
    for (i=0; i<emailsSize; i++) {
        // normalize every email local name and store into email[]
        skip = 0;
        j = 0;
        k = 0;
        found = 0;
        while (emails[i][j] != '@') {
            if (emails[i][j] == '+') {
                skip = 1;
            }
            else if (skip == 0 && emails[i][j] != '.') {
                email[k++] = emails[i][j];
            }
            j++;
        }
        // continue cpy @DomainName into email[]
        while (emails[i][j] != 0) {
            email[k++] = emails[i][j++];
        }
        email[k] = 0;
        // check email[] whether exist in uniqueEmails[][]
        for (int u=0; u<uniqueEmailsSize; u++) {
            if (strcmp(uniqueEmails[u], email) == 0)
                found = 1;
        }
        // If not found, cpy email into uniqueEmails
        if (!found) {
            strcpy(uniqueEmails[uniqueEmailsSize++], email);
        }
    }
    return uniqueEmailsSize;
}
