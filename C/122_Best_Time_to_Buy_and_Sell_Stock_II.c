int maxProfit(int* prices, int pricesSize) {

    int totalProfit = 0;

    for (int i = 1; i < pricesSize; i++) {

        int currProfit = prices[i] - prices[i - 1];
        if (currProfit > 0) {
            totalProfit += currProfit;
        }
    }
    return totalProfit;
}
