bool isHappy(int n) {

    int visited[1000] = {0};

    while (n != 1) {
        int sum = 0;

        while (n > 0) {
            int digit = n % 10;
            sum += digit * digit;
            n = n / 10;
        }

        n = sum;

        if (visited[n]) {
            return false;
        }
        
        visited[n] = 1;
    }

    return true;
}
