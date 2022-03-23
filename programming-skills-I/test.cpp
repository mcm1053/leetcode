#include <iostream>

using namespace std;

int main() {
  int from = 0, to = 0, even = 0, odd = 0;

  cout << "Enter a number that begins interval: ";
  cin >> from;

  cout << "Enter a number that ends interval: ";
  cin >> to;

  for (int i = from; i <= to; ++i) {
    if (i % 2 == 0)
      ++even;
    else
      ++odd;
  }

  cout << " even numbers: " << even << endl;
  cout << " odd numbers: " << odd << endl;

  return 0;  // don't forget this! main is function returning int so it should
             // return something
}
