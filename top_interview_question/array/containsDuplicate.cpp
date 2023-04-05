#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool containsDuplicate(vector<int> &nums) {
        set<int> unique_nums;
        for (auto num : nums) {
            unique_nums.insert(num);
        }
        return nums.size() != unique_nums.size();
    }
};