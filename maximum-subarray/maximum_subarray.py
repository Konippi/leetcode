class Solution:
    def maxSubArray(self, nums: list[int]) -> int:
        currentSum = 0
        maxSum = max(nums)

        for num in nums: 
            currentSum += num
            if currentSum < 0:
                currentSum = 0
            if maxSum < currentSum:
                maxSum = currentSum

        return maxSum
