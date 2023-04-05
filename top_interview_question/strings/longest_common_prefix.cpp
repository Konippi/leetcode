#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    string longestCommonPrefix(vector<string> &strs) {
        int n = strs.size();
        int minSize = INT_MAX;
        for (int i = 0; i < n; i++) {
            minSize = min(minSize, int(strs[i].size()));
        }
        string ans = "";
        for (int idx = 0; idx < minSize; idx++) {
            char common = strs[0][idx];
            for (int i = 0; i < n; i++) {
                if (strs[i][idx] != common) {
                    return ans;
                }
            }
            ans += common;
        }
        return ans;
    }
};