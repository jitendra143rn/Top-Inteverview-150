class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {

        vector<int> result; 
        int startPtr = 0;
        int endPtr = numbers.size() -1;

        while(startPtr < endPtr)
        {
            int sum = numbers[startPtr] + numbers[endPtr];

            if(sum == target)
            {
                result.push_back(startPtr + 1);
                result.push_back(endPtr + 1);
                return result;
            }

            if( sum  > target )
            {
                endPtr--;
            }
            else 
            {
                startPtr++;
            }
        }

         return result;
    }
};
