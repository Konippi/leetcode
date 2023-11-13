class Solution:
    def maxSubArray(self, nums: list[int]) -> int:
        currentSum = 0
        maxSum = max(nums)

        for num in nums:
            currentSum = max(num, currentSum + num)
            maxSum = max(maxSum, currentSum)

        return maxSum
