class Solution {
public:
    string addBinary(string a, string b) {
        int carry = 0; 
        int i = a.size() -1;
        int j = b.size() - 1;

        string result ;

        while( i >=0 || j >= 0 || carry)
        {

         
            int val1 = (i >= 0) ? a[i] - '0' : 0;
            int val2 = (j >=0 ) ? b[j] - '0' : 0;

            int sum = val1 + val2 + carry;

             int digit = sum % 2;
             carry = sum / 2;
            result.push_back(digit + '0');


           i--;
           j--; 
        }
        reverse(result.begin(), result.end());

        return result;
    }
};
