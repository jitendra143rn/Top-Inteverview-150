/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* numbers, int numbersSize, int target, int* returnSize) {

        int startPtr = 0; 
        int endPtr = numbersSize -1;

        int *result = (int *) malloc(sizeof(int) * 2);

        while( startPtr < endPtr )
        {
            int sum = numbers[startPtr] + numbers[endPtr];

            if( sum == target)
            {
                result[0] = startPtr + 1;
                result[1] = endPtr + 1; 
                *returnSize = 2;
                return result;
            }

            if( sum > target )
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
