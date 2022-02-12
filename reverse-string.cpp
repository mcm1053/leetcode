#include <iostream>
#include <algorithm>

int main() {
    std::string s = "Hello";
    std::reverse(s.begin(), s.end());
    std::cout << s << std::endl;
}