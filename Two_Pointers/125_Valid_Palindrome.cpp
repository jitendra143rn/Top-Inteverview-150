class Solution {
public:
    bool isPalindrome(string s) {
        string lowerCaseString;

        for (char c : s) {
            if (isalnum(c)) {
                lowerCaseString += tolower(c);
            }
        }

        int i = 0;
        int j = lowerCaseString.size() - 1;

        while (i < j) {
            if (lowerCaseString[i] != lowerCaseString[j]) {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};
