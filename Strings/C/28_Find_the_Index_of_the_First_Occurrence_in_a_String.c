int strStr(char* haystack, char* needle) {

    int hsize = strlen(haystack);
    int nsize = strlen(needle);
    int i = 0;
    int j = 0;

    while (i <= hsize - nsize) {
        int flag = 1;

        for (j = 0; j < nsize; j++) {
            if (needle[j] == haystack[i + j]) {

            } else {
                flag = 0;
                break;
            }
        }

        if (flag)
            return i;
            
        i++;

        
    }

    return -1;
}
