class Solution {
public:
    bool isHappy(int n) {
        auto sumSq = [&](int x){
            int s = 0;
            while (x) {
                int d = x % 10;
                s += d * d;
                x /= 10;
            }
            return s;
        };

        unordered_set<int> st;

        while (n != 1 && !st.count(n)) {
            st.insert(n);
            n = sumSq(n);
        }

        return n == 1;
    }
};
