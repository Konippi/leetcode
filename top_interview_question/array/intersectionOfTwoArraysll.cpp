#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> intersect(vector<int> &nums1, vector<int> &nums2) {
        map<int, int> mp1, mp2;
        vector<int> ans;
        for (int num : nums1) {
            mp1[num]++;
        }
        for (int num : nums2) {
            if (mp1[num] > 0 && mp2[num] < mp1[num]) {
                ans.push_back(num);
                mp2[num]++;
            }
        }
        return ans;
    }
};