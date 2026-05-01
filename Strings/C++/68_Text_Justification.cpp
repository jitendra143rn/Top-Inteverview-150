class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int maxWidth) {

        vector<string> result;
        vector<string> currentLine;
        int currentLineLength = 0;

        
        for (const auto& word : words) {

            if (currentLineLength + word.size() + currentLine.size() <= maxWidth) {
                currentLine.push_back(word);
                currentLineLength += word.size();
                
            } else {
                int totalSpaces = maxWidth - currentLineLength;
                int gaps = currentLine.size() - 1;
                string line = "";

                if (gaps == 0) {
                    line = currentLine[0] + string(totalSpaces, ' ');
                } else {

                    int spacePerGap = totalSpaces / gaps;
                    int extraSpaces = totalSpaces % gaps;
                    
                    for (int i = 0; i < currentLine.size(); i++ ) {
                        line += currentLine[i];

                        if(i < gaps)
                        {
                            line += string(spacePerGap, ' ');
                            if(extraSpaces > 0)
                            {
                                line += ' ';
                                extraSpaces--;
                            }
                        }
                    }
                }
                result.push_back(line);

                currentLine.clear();
                currentLine.push_back(word); // carrying last word which is not fit in single line. 
                currentLineLength = word.size(); 

            }
        }

        // Handle last line 
        string lastLine = "";

        for(int i = 0; i < currentLine.size(); i++)
        {
            lastLine += currentLine[i];
            if(i != currentLine.size() -1)
                lastLine += ' ';
        }

        // Fill remaining spaces it should <= maxWidth 
        lastLine += string(maxWidth - lastLine.size(), ' ');
        result.push_back(lastLine);

        return result;
    }
};
