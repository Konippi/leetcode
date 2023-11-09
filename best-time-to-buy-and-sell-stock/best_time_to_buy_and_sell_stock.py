class Solution:
    def maxProfit(self, prices: list[int]) -> int:
        if reversed(prices) == prices:
            return 0
        lenPrices = len(prices)
        MAX = 0
        for i in range(0, lenPrices - 1):
            for j in range(i + 1, lenPrices):
                MAX = max(MAX, prices[j] - prices[i])
        return MAX
