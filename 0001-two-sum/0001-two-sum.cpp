class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        int *ptr = nums.data();

        for (int i = 0; i < n; i++) {
            ptr = nums.data() + i;
            for (int j = i + 1; j < n; j++) {
                if (*ptr + nums[j] == target) {
                    return {static_cast<int>(ptr - nums.data()), j};
                }
            }
            ptr += 1;
        }

        return {};
    }
};