class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        # First solution Time Limit.
        # max = 0
        # for i in  range(0, len(prices)):
        #     for j in range(i, len(prices)):
        #         if prices[j] - prices[i] > max:
        #             max = prices[j] - prices[i]
        # return max
        max_profit = 0
        min_price = 9999
        for price in prices:
            if price < min_price:
                min_price = price
            elif price - min_price > max_profit:
                max_profit = price - min_price
        return max_profit
