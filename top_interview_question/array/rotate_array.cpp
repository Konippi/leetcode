#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void rotate(vector<int> &nums, int k) {
        int len = nums.size();
        int incremented_idx = k % len;
        vector<int> copied_nums = nums;
        for (int i = 0; i < len; i++) {
            int new_idx = i + incremented_idx;
            if (new_idx >= len) {
                new_idx -= len;
            }
            nums[new_idx] = copied_nums[i];
        }
    }
};