#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int myAtoi(string s) {
        long res = 0;
        int sign = 1;
        bool start = false;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '-' || s[i] == '+') {
                start = true;
                if (s[i] == '-') {
                    sign = -1;
                }
                i++;
            }
            if (s[i] == ' ' && !start) {
                continue;
            }
            if (s[i] < '0' || s[i] > '9') {
                break;
            } else {
                start = true;
                res = res * 10 + (s[i] - '0');
                if (res * sign > INT_MAX)
                    return INT_MAX;
                else if (res * sign < INT_MIN)
                    return INT_MIN;
                if (s[i + 1] < '0' || s[i + 1] > '9')
                    break;
            }
        }
        return res * sign;
    }
};