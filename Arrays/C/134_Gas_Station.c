int canCompleteCircuit(int* gas, int gasSize, int* cost, int costSize) {

    int gasTank = 0;
    int startIndex = 0;
    int totalGasTank = 0;
    int totalCostTank = 0;

    for (int i = 0; i < gasSize; i++) {
        gasTank += gas[i] - cost[i];

        if (gasTank < 0) {
            startIndex = i + 1;
            gasTank = 0;
        }

        /* Total Cost and Gas */
        totalGasTank += gas[i];
        totalCostTank += cost[i];
    }

    if (totalGasTank >= totalCostTank) {
        return startIndex;
    }

    return -1;
}
