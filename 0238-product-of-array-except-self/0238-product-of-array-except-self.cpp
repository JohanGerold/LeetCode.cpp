class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();

        vector<int> leftarr(n);
        vector<int> rightarr(n);

        int product = 1;
        leftarr[0] = 1;

        for (int i = 1; i < n; i++) {
            product = nums[i - 1] * product;
            leftarr[i] = product;
        }

        product = 1;
        rightarr[n - 1] = 1;

        for (int i = n - 2; i >= 0; i--) {
            product = nums[i + 1] * product;
            rightarr[i] = product;
        }

        for (int i = 0; i < n; i++) {
            leftarr[i] = leftarr[i] * rightarr[i];
        }

        return leftarr;
    }
};