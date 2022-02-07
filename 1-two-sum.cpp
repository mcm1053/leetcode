// Given an array of integers nums and an integer target, return indices of the
// two numbers such that they add up to target. You may assume that each input
// would have exactly one solution, and you may not use the same element twice.
// You can return the answer in any order.

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  vector<int> twoSum(vector<int> &nums, int target) {
    // Loop through the vector adding each number to the rest
    for (int i = 0; i < nums.size(); ++i) {
      // j needs to always be one ahead of i
      for (int j = i + 1; j < nums.size(); ++j) {
        // If the numbers add to target, return indexes
        cout << nums[i] << " + " << nums[j] << endl;
        // if (nums[i] + nums[j] == target) {
        //   // return {i, j};
        // }
      }
    }
    // If not found
    return {-1, -1};
  }
};

// Testing code
int main() {
  vector<int> tmp = {2, 7, 11, 15};
  Solution s;
  vector<int> x = s.twoSum(tmp, 9);
  for (int i = 0; i < x.size(); i++) {
    cout << x[i];
  }
  return 0;
}