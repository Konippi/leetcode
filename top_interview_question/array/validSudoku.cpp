#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool isValidRow(vector<vector<char>> &board) {
        for (int i = 0; i < 9; i++) {
            map<int, int> mp;
            for (int j = 0; j < 9; j++) {
                if (mp[board[i][j]] > 0) {
                    return false;
                }
                if (board[i][j] != '.') {
                    mp[board[i][j]]++;
                }
            }
        }
        return true;
    }
    bool isValidColumn(vector<vector<char>> &board) {
        for (int j = 0; j < 9; j++) {
            map<int, int> mp;
            for (int i = 0; i < 9; i++) {
                if (mp[board[i][j]] > 0) {
                    return false;
                }
                if (board[i][j] != '.') {
                    mp[board[i][j]]++;
                }
            }
        }
        return true;
    }
    bool isValidBlock(vector<vector<char>> &board, int x, int y) {
        map<int, int> mp;
        for (int i = 0; i < 3; i++) {
            int ny = y + i;
            for (int j = 0; j < 3; j++) {
                int nx = x + j;
                if (mp[board[ny][nx]] > 0) {
                    return false;
                }
                if (board[ny][nx] != '.') {
                    mp[board[ny][nx]]++;
                }
            }
        }
        return true;
    }
    bool isValidSudoku(vector<vector<char>> &board) {
        if (!isValidRow(board) || !isValidColumn(board)) {
            return false;
        }
        for (int i = 0; i < 9; i += 3) {
            for (int j = 0; j < 9; j += 3) {
                if (!isValidBlock(board, j, i)) {
                    return false;
                }
            }
        }
        return true;
    }
};