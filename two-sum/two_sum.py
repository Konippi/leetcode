class Solution:
    def twoSum(self, nums: list[int], target: int) -> list[int]:
        lenNums = len(nums)
        for i in range(0, lenNums - 1):
            for j in range(i+1, lenNums):
                if nums[i] + nums[j] == target:
                    return [i, j]
        return []
