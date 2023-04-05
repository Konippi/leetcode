#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int reverse(int x) {
        bool isMinus = x < 0;
        string s = to_string(abs(x));
        ::reverse(s.begin(), s.end());
        long long sNum = stoll(s);
        if (sNum > INT_MAX) {
            return 0;
        }
        return isMinus ? (int)(sNum - 2 * sNum) : int(sNum);
    }
};