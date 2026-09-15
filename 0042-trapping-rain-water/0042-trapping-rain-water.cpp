class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();

        vector<int> leftmax(n);
        vector<int> rightmax(n);

        leftmax[0] = INT_MIN;

        for (int i = 1; i < n; i++) {
            leftmax[i] = max(leftmax[i - 1], height[i - 1]);
        }

        rightmax[n - 1] = INT_MIN;

        for (int i = n - 2; i >= 0; i--) {
            rightmax[i] = max(rightmax[i + 1], height[i + 1]);
        }

        int sum = 0;

        for (int i = 1; i < n - 1; i++) {
            int minimum = min(leftmax[i], rightmax[i]);
            int difference = minimum - height[i];

            if (difference < 0) {
                continue;
            } else {
                sum += difference;
            }
        }

        return sum;
    }
};