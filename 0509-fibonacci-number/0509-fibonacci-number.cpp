class Solution {
public:
    int fib(int n) {
        int i = 0;
        int j = 1;

        int counter = 0;

        while (counter <= n) {
            int seq = i + j;
            i = j;
            j = seq;
            counter++;
        }

        return j - i;
    }
};