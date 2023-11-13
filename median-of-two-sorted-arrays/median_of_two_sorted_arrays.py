class Solution:
    def findMedianSortedArrays(self, nums1: list[int], nums2: list[int]) -> float:
        concatenatedNums = sorted(nums1 + nums2)
        lenConcatenatedNums = len(concatenatedNums)

        middleIdx = lenConcatenatedNums // 2

        if lenConcatenatedNums % 2 == 1:
            return float(concatenatedNums[middleIdx])

        return (concatenatedNums[middleIdx-1]+concatenatedNums[middleIdx]) / 2
