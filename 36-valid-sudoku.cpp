// Determine if a 9 x 9 Sudoku board is valid. Only the filled cells need to be
// validated according to the following rules: Each row must contain the digits
// 1-9 without repetition. Each column must contain the digits 1-9 without
// repetition. Each of the nine 3 x 3 sub-boxes of the grid must contain the
// digits 1-9 without repetition.
#include <bits/stdc++.h>

#include <vector>
using namespace std;

class Solution {
 public:
  bool isValidSudoku(vector<vector<char>> &board) {
    // Convert char to int
    // sort(board.begin(), board.end());
    // Evaluate each column
    for (int i = 0; i < board.size(); i++) {
      for (int j = 0; j < board.size(); j++) {
        cout << '[' << board[i][j] << ']';
      }
      cout << endl;
    }
    // evaluate each row
    // cout << endl;
    // for (int i = 0; i < board.size(); i++) {
    //   for (int j = 0; j < board.size(); j++) {
    //     cout << '[' << board[j][i] << ']';
    //   }
    //   cout << endl;
    // }
    // evaluate each 3x3 box
    return false;
  }
};

int main() {
  Solution s;
  // s.isValidSudoku(vector<vector<char> > &board);
  vector<vector<char>> vec = {{'5', '3', '.', '.', '7', '.', '.', '.', '.'},
                              {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
                              {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
                              {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
                              {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
                              {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
                              {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
                              {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
                              {'.', '.', '.', '.', '8', '.', '.', '7', '9'}};
  s.isValidSudoku(vec);
  return 0;
}
