
class Solution {
public:
    int hammingWeight(int n) {
        int ones = 0;
        string binary = "";
        unsigned int num = static_cast<unsigned int>(n);

        while (num > 0) {
            int remainder = num % 2;
            binary += to_string(remainder);
            num = num / 2;
        }

        for (size_t i = 0; i < binary.length(); i++) {
            if (binary[i] == '1') {
                ones++;
            }
        }

        return ones;
    }
};
