class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
    //int count =0; 
    //int size = nums.size() / 2;
    //int ret = 0;
/*  
TC = O(n2)  
*/
    // for(int i = 0; i < nums.size(); i++)
    // {
    //     for(int j = i; j < nums.size(); j++)
    //     {
    //         if(nums[i] == nums[j])
    //         {
    //             count++;
    //         }
    //     }
    //     if(count > size)
    //     {
    //         ret= nums[i];
    //     }
    //     count = 0; 
    // }

    // return ret;


 // TC = O(n) 
    int candidate = 0;
    int count = 0;

    for(int i = 0; i < nums.size(); i++)
    {
        if(count == 0)
        {
            candidate = nums[i];
        }

        if(nums[i] == candidate)
        {
            count++;
        }
        else
        {
            count--;
        }
    }

    return candidate;




    }
};
