#include <iostream>

using std::cin;
using std::cout;

int main() {
  int n;
  while(cin >> n && n != 42) {
    cout << n << '\n';
  }
}
