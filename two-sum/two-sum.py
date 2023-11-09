class Solution:
    def twoSum(self, nums: list[int], target: int) -> list[int]:
        len_nums = len(nums)
        for i in range(0, len_nums - 1):
            for j in range(i+1, len_nums):
                if nums[i] + nums[j] == target:
                    return [i, j]
        return []
