package best_time_to_buy_and_sell_stock;

class Solution {
    public int maxProfit(int[] prices) {
        int lowest_buying_price = prices[0];
        int max_profit = 0;
        for (int index = 0; index < prices.length; index++) {
            int price = prices[index];
            if (price < lowest_buying_price) {
                lowest_buying_price = price;
            }
            int current_profit = price - lowest_buying_price;
            if (current_profit > max_profit) {
                max_profit = current_profit;
            }
        }
        return max_profit;
    }
}