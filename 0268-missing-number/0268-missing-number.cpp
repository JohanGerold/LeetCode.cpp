class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int len = nums.size();
        int sum = 0;
        int curr_sum = 0;

        for (int i = 0; i < len; i++) {
            curr_sum += nums[i];
        }

        for (int i = 1; i <= len; i++) {
            sum += i;
        }

        return sum - curr_sum;
    }
};