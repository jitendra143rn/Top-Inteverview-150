int lengthOfLastWord(char* s) {
    
    int size = strlen(s);
    int count = 0; 

    if(size == 1)
    return 1;

    for(int i = size -1; i >=0; i--)
    {
        if(s[i] != ' ')
            count++;

        if(s[i] == ' ' && count > 0)
            break;
    }
    return count;
}
