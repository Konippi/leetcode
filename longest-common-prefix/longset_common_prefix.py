import sys


class Solution:
    def longestCommonPrefix(self, strs: list[str]) -> str:
        ans = ""
        lenStrs = len(strs)
        MIN_LENGTH = sys.maxsize
        for i in range(lenStrs):
            MIN_LENGTH = min(MIN_LENGTH, len(strs[i]))
        for i in range(MIN_LENGTH):
            prefix = strs[0][i]
            for j in range(1, lenStrs):
                if strs[j][i] != prefix:
                    return ans
            ans += prefix
        return ans
