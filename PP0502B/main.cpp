#include <iostream>

using std::cin;
using std::cout;

int main() {
  int t, n;
  cin >> t;
  for(int i = 0; i < t; i++) {
    cin >> n;
    int m[n];
    for(int j = 0; j < n; j++) {
      cin >> m[j];
    }
    for(int k = n-1; k >= 0; k--) {
      cout << m[k] << " ";
    }
    cout << '\n';
  }

  return 0;
}
