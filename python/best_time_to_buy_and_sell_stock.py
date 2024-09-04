from typing import List


class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        lowest_buying_price = prices[0] # Set lowest price to first element of list
        max_profit = 0 # Set max profit to 0

        for price in prices: # Iterate through prices list
            if price < lowest_buying_price: # Check if current price in list is lower than lowest price
                lowest_buying_price = price # Set if condition is true
            current_profit = price - lowest_buying_price # The difference in current price and lowest price is the current profit
            if current_profit > max_profit: # Check if current profit is more than max profit
                max_profit = current_profit # Set if condition is true
        return max_profit # Return max_profit after loop has iterated over prices list


trial = Solution()
stock_prices = [7, 6, 4, 3, 1, 9, 3, 7, 9, 1, 4, 6, 10]
print(trial.maxProfit(prices=stock_prices))
