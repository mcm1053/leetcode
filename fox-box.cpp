// If divisible by 4, print nothing
// If divisible by 7, print Fox
// If divisible by 11, print Box
// Else print numbers up to 100
#include <bits/stdc++.h>
using namespace std;

int main() {
  for (int i = 0; i < 100; i++) {
    if (i % 4 == 0) {
      continue;
    } else if (i % 7 == 0) {
      cout << "Fox" << endl;
    } else if (i % 11 == 0) {
      cout << "Box" << endl;
    } else {
      cout << i << endl;
    }
  }
  return 0;
}