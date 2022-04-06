// Write a function that takes an unsigned integer and returns the number of '1'
// bits it has (also known as the Hamming weight).

#include <bits/c++config.h>
#include <iostream>
#include <string>

class Solution {
public:
  int hammingWeight(uint32_t n) {
    int count = 0;
    // Convert int to a string - Error here
    std::string s = std::to_string(n);
    // Loop through string
    for (int i = 0; i < s.size(); i++) {
      // Everytime we see a 1, we increment count
      if (s[i] == '1') {
        count++;
      }
    }
    return count;
  }
};

int main() {
  Solution s;
  uint32_t num = 00000000000000000000000000001011;
  int ans = s.hammingWeight(num);
  std::cout << ans << std::endl;
  return 0;
}