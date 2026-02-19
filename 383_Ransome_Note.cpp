class Solution {
public:
   
 bool canConstruct(string ransomNote, string magazine) {
        
        int feq[26] = {0};
        for(int i = 0 ; i < magazine.size(); i++)
        {
           feq[magazine[i] - 'a']++;
        }

        for(int i = 0; i< ransomNote.size(); i++)
        {
            feq[ransomNote[i] - 'a']--;

            if(feq[ransomNote[i] - 'a'] < 0)
            {
                return false;
            }
        }


        return true;

    }
};
