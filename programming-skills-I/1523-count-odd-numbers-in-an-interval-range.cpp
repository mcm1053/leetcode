// Given two non-negative integers low and high. Return the count of odd numbers
// between low and high (inclusive).

#include <bits/stdc++.h>
using namespace std;

class Solution {
 public:
  // Inital approach
  //  int countOdds(int low, int high) {
  //    // Count from low to high
  //    int count = 0;
  //    for (int i = low; i <= high; i++) {
          // If its not divisible by 2, its odd
  //      if (i % 2 == 1) {
  //        count++;
  //      }
  //    }
  //    return count;
  //  }
  // Optimum (found online-
  // https://www.tutorialcup.com/leetcode-solutions/count-odd-numbers-in-an-interval-range-leetcode-solution.htm)
  int countOdds(int low, int high) { return (high + 1) / 2 - low / 2; }
};

int main() {
  Solution s;
  int low = 0;
  int high = 1000000000;
  int x = s.countOdds(low, high);
  cout << x << endl;
  return 0;
}
