class Solution {
public:
    bool isAnagram(string s, string t) {
        

        if(s.size() > t.size() || t.size() > s.size())
        return false;


         int feq[26] = {0};
        for(int i = 0 ; i < s.size(); i++)
        {
           feq[s[i] - 'a']++;
        }

        for(int i = 0; i< t.size(); i++)
        {
            feq[t[i] - 'a']--;

            if(feq[t[i] - 'a'] < 0)
            {
                return false;
            }
        }


        return true;
    }
};
