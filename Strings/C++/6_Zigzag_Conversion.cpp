class Solution {
public:
    string convert(string s, int numRows) {
        
        if(numRows == 1)
            return s;

        vector<string> rows(numRows);
        string result = "";

        int currRow =0;
        bool down =0 ;

        for(int i = 0; i < s.size(); i++)
        {
            rows[currRow].push_back(s[i]);

            if(currRow == numRows -1)
                down = false;
            else if(currRow == 0)
                down = true; 

            (down)? (currRow++): (currRow--);
            
             
        }
       
       for(int i = 0; i < numRows; i++)
       {
            result +=rows[i];
       }

        return result;
    }
};
