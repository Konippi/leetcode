#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    long long reverse(int x) {
        bool isMinus = x < 0;
        string s = to_string(abs(x));
        ::reverse(s.begin(), s.end());
        long long sNum = stol(s);
        if (sNum > 2147483648) {
            return 0;
        }
        return isMinus ? sNum - 2 * sNum : sNum;
    }
};