#include <iostream>

using std::cin;
using std::cout;

int main() {
  int t, n;
  int a = 0;
  cin >> t;
  for(int i = 0; i < t; i++) {
    cin >> n;
    int m[n];
    for (int j = 0; j < n; j++) {
      cin >> m[j];
      a += m[j];
    }
    cout << a << '\n';
    a = 0;
  }

  return 0;
}
