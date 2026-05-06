
int candy(int* ratings, int ratingsSize) {

    int minCandies = 0;
    int ratingsize = ratingsSize;
    int minCan[ratingsize];

    for (int i = 0; i < ratingsSize; i++)
        minCan[i] = 1;

    for (int i = 1; i < ratingsSize; i++) {
        

        if (ratings[i] > ratings[i - 1]) {
            minCan[i] = minCan[i - 1] + 1;
        }
    }

    for (int i = ratingsSize - 2; i >= 0; i--) {
        if (ratings[i] > ratings[i + 1]) {
            minCan[i] = (minCan[i] > (minCan[i + 1] + 1)) ? minCan[i]
                                                          : (minCan[i + 1] + 1);
        }
    }

    for (int i = 0; i < ratingsSize; i++) {
        minCandies += minCan[i];
    }

    return minCandies;
}
