// Given two strings s and t, return true if t is an anagram of s, and false
// otherwise.
// An Anagram is a word or phrase formed by rearranging the letters of a
// different word or phrase, typically using all the original letters exactly
// once.
#include <algorithm>
#include <iostream>

class Solution {
public:
  bool isAnagram(std::string s, std::string t) {
    // Sort both strings which allow easier comparison
    std::sort(s.begin(), s.end());
    std::sort(t.begin(), t.end());
    // Return true if s = t, otherwise false
    return s==t;
  }
};

// Driver code
int main() {
  Solution s;
  std::string x = "hello";
  std::string y = "eollh";
  bool z = s.isAnagram(x, y);
  std::cout << z;
  return 0;
}