// Given a string s containing just the characters '(', ')', '{', '}', '[' and
// ']', determine if the input string is valid. An input string is valid if:
// Open brackets must be closed by the same type of brackets.
// Open brackets must be closed in the correct order.

#include <iostream>
#include <stack>

class Solution {
 public:
  bool isValid(std::string str) {
    // Create a stack to store string str
    std::stack<char> s;
    char x;

    // Loop through string
    for (int i = 0; i < str.length(); i++) {
      // If theres an opening bracket, add it to stack
      if (str[i] == '(' || str[i] == '[' || str[i] == '{') {
        s.push(str[i]);
        continue;
      }
      // If the stack is empty return false
      if (s.empty()) {
        return false;
      }

      // Use switch case to evaluate the ending bracket
      switch (str[i]) {
        case ')':
          // Store the element
          x = s.top();
          s.pop();
          if (x == '{' || x == '[') {
            return false;
          }
          break;

        case '}':
          // Store the element
          x = s.top();
          s.pop();
          if (x == '(' || x == '[') {
            return false;
          }
          break;

        case ']':
          // Store the element
          x = s.top();
          s.pop();
          if (x == '(' || x == '{') {
            return false;
          }
          break;
      }
    }
    // Return true if stack is empty
    return (s.empty());
  }
};

// Driver code
int main() {
  Solution s;
  std::string v = "{()}[]";
  bool x = s.isValid(v);
  std::cout << x << std::endl;
}
