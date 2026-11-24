class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int len = prices.size();
        int min_price = INT_MAX;
        int max_profit = 0;

        for (int i = 0; i < len; i++) {
            min_price = min(prices[i], min_price);
            int sum = prices[i] - min_price;
            max_profit = max(max_profit, sum);
        }

        return max_profit;
    }
};