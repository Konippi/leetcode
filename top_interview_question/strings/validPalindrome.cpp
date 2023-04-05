#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool isPalindrome(string s) {
        vector<char> array;
        for (char c : s) {
            if (isalpha(c) || isdigit(c)) {
                array.push_back(tolower(c));
            }
        }
        for (int i = 0; i < array.size() / 2; i++) {
            if (array[i] != array[array.size() - 1 - i]) {
                return false;
            }
        }
        return true;
    }
};