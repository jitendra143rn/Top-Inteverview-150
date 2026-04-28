class Solution {
public:
    int strStr(string haystack, string needle) {

        int hSize = haystack.size();
        int nSize = needle.size();
        int i = 0;
        int j = 0;

        while (i <= hSize - nSize) {
            int match = 1;

            for (j = 0; j < nSize; j++) {
                if (needle[j] == haystack[i + j]) {

                } else {
                    match = 0;
                    break;
                }
            }

            if (match) {
                return i;
            }
            i++;
        }
        return -1;
    }
};
