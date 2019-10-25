#include <iostream>

using std::cin;
using std::cout;

int nwd(int a, int b);

int main() {
  int t, a, b;
  cin >> t;
  for(int i = 0; i < t; i++) {
    cin >> a >> b;
    cout << nwd(a, b) << '\n';
  }
  return 0;
}

int nwd(int a, int b) {
  int temp;
  while(b) {
    temp = b;
    b = a % b;
    a = temp;
  }
  return a;
}
