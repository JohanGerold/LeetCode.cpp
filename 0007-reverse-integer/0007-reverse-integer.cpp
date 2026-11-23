
class Solution {
public:
    int reverse(int n) {
        string x = to_string(n);
        int left = (n < 0) ? 1 : 0;
        int right = x.length() - 1;

        while (left < right) {
            swap(x[left], x[right]);
            left++;
            right--;
        }

        try {
            return stoi(x);
        } catch (const out_of_range&) {
            return 0;
        }
    }
};
