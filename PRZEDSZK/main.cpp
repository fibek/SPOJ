#include <iostream>

using std::cin;
using std::cout;

int main() {
  int n, a ,b, c, temp;
  cin >> n;
  for(int i = 0; i < n; i++) {
    cin >> a >> b;
    c = a*b;
    while(b) {
      temp = b;
      b = a % b;
      a = temp;
    }
    c /= a;
    cout << c << '\n';
  }

  return 0;
}
