#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();

        sort(nums.begin(), nums.end());

        int i = 0;
        int j = i + 1;
        bool isDuplicate = false;

        while (j < n) {
            if (nums[i] == nums[j]) {
                isDuplicate = true;
            }
            i++;
            j++;
        }

        return isDuplicate;
    }
};