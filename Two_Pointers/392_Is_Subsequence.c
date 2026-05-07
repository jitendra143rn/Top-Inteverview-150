bool isSubsequence(char* s, char* t) {

    int i = 0;
    int j = 0;
    int slen = strlen(s);
    int tlen = strlen(t);

    while (i < slen && j < tlen) {
        if (s[i] == t[j]) {
            i++;
        }

        j++;
    }
    if (i == slen) {
        return true;
    }

    return false;
}
