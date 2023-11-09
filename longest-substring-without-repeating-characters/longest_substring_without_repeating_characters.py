class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        ans = 0
        for i in range(len(s)):
            ss = ""
            ansTmp = 0
            for j in range(i+1, len(s)):
                ss += s[j]
                if len(ss) != len(set(ss)):
                    continue
                ansTmp += 1
            ans = max(ans, ansTmp)
        return ans
