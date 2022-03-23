// You are given an array of unique integers salary where salary[i] is the
// salary of the ith employee. Return the average salary of employees excluding
// the minimum and maximum salary. Answers within 10-5 of the actual answer will
// be accepted.
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  double average(vector<int> &salary) {
    // Sort the vector
    sort(salary.begin(), salary.end());
    double sum = 0;
    // Loop through the vector to get the sum, start at 1 because excluding
    // minimum, stop at max - 1 because excluding max.
    for (int i = 1; i < salary.size() - 1; i++) {
      sum += salary[i];
    }
    // Return the average. sum / size of vector. Subtract 2 because we removed
    // min and max.
    return (double)(sum / (salary.size() - 2));
  }
};

int main() {
  Solution s;
  std::vector<int> x = {1, 2, 3, 4};
  double y = s.average(x);
  std::cout << y << std::endl;
  return 0;
}