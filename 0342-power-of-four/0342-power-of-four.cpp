
class Solution {
public:
    bool isPowerOfFour(int n) {
        if (n <= 0) {
            return false;
        }

        for (int i = 0; i <= 15; i++) {
            if ((1 << (2 * i)) == n) {
                return true;
            }
        }
        return false;
    }
};
