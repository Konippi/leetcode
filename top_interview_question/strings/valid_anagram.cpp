#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool isAnagram(string s, string t) {
        map<char, int> mpS, mpT;
        for (char c : s) {
            mpS[c]++;
        }
        for (char c : t) {
            mpT[c]++;
        }
        return mpS == mpT;
    }
};