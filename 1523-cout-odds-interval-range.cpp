// Given two non-negative integers low and high. Return the count of odd numbers
// between low and high (inclusive).
#include <iostream>

class Solution {
public:
  int countOdds(int low, int high) {
    // int count = 0;
    // for (int i = low; i <= high; i++) {
    //   if ((i % 2) == 1) {
    //     count++;
    //   }
    // }
    // return count;

    // // A better solution
    // (https://zxi.mytechroad.com/blog/math/leetcode-1523-count-odd-numbers-in-an-interval-range/):
    return (high + 1) / 2 - low / 2;
  }
};

int main() {
  Solution s;
  int l = 56;
  int h = 111;
  std::cout << s.countOdds(l, h) << std::endl;
  return 0;
}