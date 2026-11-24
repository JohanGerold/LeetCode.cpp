class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int len = nums.size();
        int largest = INT_MIN;
        int curr_sum = 0;

        for (int i = 0; i < len; i++) {
            curr_sum += nums[i];
            largest = max(curr_sum, largest);

            if (curr_sum < 0) {
                curr_sum = 0;
            }
        }

        return largest;
    }
};