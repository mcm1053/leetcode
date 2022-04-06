// You are given an integer array prices where prices[i] is the price of a given
// stock on the ith day.

// On each day, you may decide to buy and/or sell the stock. You can only hold
// at most one share of the stock at any time. However, you can buy it then
// immediately sell it on the same day.

// Find and return the maximum profit you can achieve.

#include <algorithm>
#include <iostream>
#include <vector>

class Solution {
public:
  int maxProfit(std::vector<int> &prices) {
    int profit = 0;
    // Loop through vector 
    for (int i = 1; i < prices.size(); i++) {
        // Check if prices at location i is greater than previous
      if (prices[i] > prices[i - 1]) {
          // current - previous += profit
        profit += prices[i] - prices[i - 1];
      }
    }
    return profit;
  }
};

// Driver code
int main() {
  std::vector<int> stocks = {7, 1, 5, 3, 6, 4};
  Solution s;
  int ans = s.maxProfit(stocks);
  std::cout << ans << std::endl;
  return 0;
}