#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void moveZeroes(vector<int> &nums) {
        vector<int> ans;
        int zero_cnt = 0;
        for (int num : nums) {
            if (num == 0) {
                zero_cnt++;
            } else {
                ans.push_back(num);
            }
        }
        for (int i = 0; i < zero_cnt; i++) {
            ans.push_back(0);
        }
        nums = ans;
    }
};