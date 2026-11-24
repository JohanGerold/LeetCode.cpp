class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int left = 0;
        int right = n - 1;
        int left_max = 0;
        int right_max = 0;
        int sum = 0;

        while (left < right) {
            left_max = max(height[left], left_max);
            right_max = max(height[right], right_max);

            if (right_max >= left_max) {
                sum += left_max - height[left];
                left++;
            } else {
                sum += right_max - height[right];
                right--;
            }
        }

        return sum;
    }
};