from typing import List


class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        lowest_buying_price = prices[0]
        max_profit = 0

        for price in prices:
            if price < lowest_buying_price:
                lowest_buying_price = price
            current_profit = price - lowest_buying_price
            if current_profit > max_profit:
                max_profit = current_profit
        return max_profit


trial = Solution()
stock_prices = [7, 6, 4, 3, 1, 9, 3, 7, 9, 1, 4, 6, 10]
print(trial.maxProfit(prices=stock_prices))
