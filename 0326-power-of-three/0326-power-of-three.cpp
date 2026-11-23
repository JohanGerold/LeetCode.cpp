
class Solution {
public:
    bool isPowerOfThree(int n) {
        int result = 1;
        int digit = 3;

        if (n <= 0) {
            return false;
        }

        while (result < n) {
            if (result > n / 3) {
                return false;
            }

            result *= digit;
        }

        return result == n;
    }
};
