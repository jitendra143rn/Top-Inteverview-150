int max(int a , int b )
{
    return a > b ? a : b;

}

int jump(int* nums, int numsSize) {
    
    int farthest = 0; 
    int currentEnd = 0; 
    int jumps = 0; 

    for(int i = 0; i < numsSize -1; i++)
    {

        farthest = max(farthest, i + nums[i]);

        if(i == currentEnd)
        {
            jumps++;    
            currentEnd = farthest;
           
        }
            
    }
    return jumps; 

}
