#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool isValidSudoku(vector<vector<char>> &board) {
        for (int i = 0; i < 9; i++) {
            map<int, int> mp;
            for (int j = 0; j < 9; j++) {
                if (mp[board[i][j]] > 0) {
                    return false;
                }
                if (isdigit(board[i][j])) {
                    mp[board[i][j]]++;
                }
            }
        }
        for (int j = 0; j < 9; j++) {
            map<int, int> mp_x;
            for (int j = 0; j < 9; j++) {
                if (mp_x[board[i][j]] > 0) {
                    return false;
                }
                if (isdigit(board[i][j])) {
                    mp_x[board[i][j]]++;
                }
            }
        }
    }
};