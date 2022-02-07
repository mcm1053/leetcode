// Given an integer array nums, return true if any value appears at least twice
// in the array, and return false if every element is distinct
#include <iostream>
#include <vector>

class Solution {
 public:
  bool containsDuplicate(std::vector<int>& nums) {
    // Loop comparing each number to the others
    for (int i = 0; i < nums.size(); i++) {
      // Always 1 ahead of i
      for (int j = i + 1; j < nums.size(); j++) {
        if (nums[i] == nums[j]) {
          return true;
        }
      }
    }
    return false;
  }
};

// Driver code
int main() {
  Solution s;
  std::vector<int> vec = {1, 2, 3, 1};
  bool x = s.containsDuplicate(vec);
  std::cout << x << std::endl;
  return 0;
}