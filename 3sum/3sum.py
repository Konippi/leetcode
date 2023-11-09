class Solution:
    def threeSum(self, nums: list[int]) -> list[list[int]]:
        ansList = []
        lenNums = len(nums)
        for i in range(0, lenNums - 2):
            for j in range(i + 1, lenNums - 1):
                for k in range(j + 1, lenNums):
                    if nums[i] + nums[j] + nums[k] == 0 and sorted([nums[i], nums[j], nums[k]]) not in ansList:
                        ansList.append(sorted([nums[i], nums[j], nums[k]]))
        return ansList
