void isort(int *arr,int size)
{
    for(int i = 1; i < size; i++)
    {
        int j = i -1; 
        int x = arr[i];

        while(j >= 0 && arr[j] > x)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j+1] = x;
    }
}

int hIndex(int* citations, int citationsSize) {

    int n = citationsSize;
    isort(citations,  n);

    for (int i = 0; i < n; i++) {

        if (citations[i] >= (n - i))
            return n - i;
    }
    return 0;
}
