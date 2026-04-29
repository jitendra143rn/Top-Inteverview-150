class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.size() == 0)
            return "";

        int maxLen = strs.size();
        string commonPre;

        int i = 0;
        while (i < strs[0].size()) {

            char current = strs[0][i];

            for (int j = 1; j < strs.size(); j++) {

                if (i >= strs[j].size() || strs[j][i] != current) {
                    return commonPre;
                }
            }
            commonPre += current;
            i++;
        }

        return commonPre;
    }
};
