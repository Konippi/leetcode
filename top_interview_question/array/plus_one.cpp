#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> plusOne(vector<int> &digits) {
        reverse(digits.begin(), digits.end());
        digits[0] += 1;
        for (int i = 0; i < digits.size() - 1; i++) {
            if (digits[i] == 10) {
                digits[i] = 0;
                digits[i + 1]++;
            }
        }
        vector<int> ans = digits;
        if (ans[digits.size() - 1] == 10) {
            ans[digits.size() - 1] = 0;
            ans.push_back(1);
        }
        reverse(ans.begin(), ans.end());

        return ans;
    }
};