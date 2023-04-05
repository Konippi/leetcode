#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int firstUniqChar(string s) {
        int ans = -1;
        map<char, int> mp;
        for (char c : s) {
            mp[c]++;
        }
        for (int i = s.size() - 1; i >= 0; i--) {
            if (mp[s[i]] == 1) {
                ans = i;
            }
        }
        return ans;
    }
};