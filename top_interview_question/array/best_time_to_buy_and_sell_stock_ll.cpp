#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int maxProfit(vector<int> &prices) {
        int total = 0, nxt = 1;
        for (int i = 0; i < prices.size() - 1; i++) {
            if (prices[i] < prices[i + nxt]) {
                total += prices[i + nxt] - prices[i];
            } else {
                nxt++;
            }
        }
    }
};