int max(int a, int b) {
    return (a > b) ? a : b;
}
bool canJump(int* nums, int numsSize) {
    
    int maxJump = 0; 

    for(int i = 0; i < numsSize; i++)
    {
        if(i > maxJump)
            return false;
        maxJump = max(maxJump, i + nums[i]);

        if(maxJump >= numsSize -1)
            return true;
    }
    return false;
}
