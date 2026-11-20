#include <string>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x);
        int len = s.length();

        int i = 0;
        int j = len - 1;

        bool isPalindrome = true;

        while (i < j) {
            if (s[i] != s[j]) {
                isPalindrome = false;
                break;
            }
            i++;
            j--;
        }

        return isPalindrome;
    }
};