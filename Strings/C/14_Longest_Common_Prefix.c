char* longestCommonPrefix(char** strs, int strsSize) {

    if (strsSize == 0)
        return "";

    int maxLen  = strlen(strs[0]);
    char* commonPre = (char*)malloc(maxLen+ 1);

    int i = 0;
    while (strs[0][i] != '\0') {

        char current = strs[0][i];

        for (int j = 1; j < strsSize; j++) {

            if (strs[j][i] != current) {
                commonPre[i] = '\0';
                return commonPre;
            }
        }
        commonPre[i] = current;
        i++;
    }
    commonPre[i] = '\0';
    return commonPre;
}
