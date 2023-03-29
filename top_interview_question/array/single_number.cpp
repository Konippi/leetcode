#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int singleNumber(vector<int> &nums) {
        map<int, int> mp;
        for (int num : nums) {
            mp[num]++;
        }
        int ans = 0;
        for (auto num_with_cnt : mp) {
            if (num_with_cnt.second == 1) {
                ans = num_with_cnt.first;
            }
        }
        return ans;
    }
};