class Solution {
public:
    string intToRoman(int num) {

        string roman;
        int rem = 0;
        int value[13] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        for (int i = 0; i < 13; i++) {
            while (num >= value[i]) {
                roman += getValue(value[i]);
                num = num - value[i];
            }
        }

        return roman;
    }

    string getValue(int c)

    {
        switch (c) {

        case 1:
            return "I";
        case 4:
            return "IV";
        case 5:
            return "V";
        case 9:
            return "IX";
        case 10:
            return "X";
        case 40:
            return "XL";
        case 50:
            return "L";
        case 90:
            return "XC";
        case 100:
            return "C";
        case 400:
            return "CD";
        case 500:
            return "D";
        case 900:
            return "CM";
        case 1000:
            return "M";
        }

        return "";
    }
};
