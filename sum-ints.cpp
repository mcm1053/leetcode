// This program will sum ints from 1 to n

#include <bits/stdc++.h>
using namespace std;

int sumInts(int n) {
  int x = n * (n + 1) / 2;
  return x;
}

int main() {
  int tmp = sumInts(100);
  cout << tmp << endl;
}
