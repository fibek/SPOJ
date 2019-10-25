#include <iostream>

using std::cin;
using std::cout;
using std::string;

int main() {
  int n, m;
  m = 1;
  string w;
  cin >> n;
  for(int i = 0; i < n; i++) {
    cin >> w;
    for(int j = 1; j <= w.length(); j++) {
      if(w[j] == w[j-1]) {
        m++;
      } else {
        if(m > 2) {
          cout << w[j-1] << m;
          m = 1;
          continue;
        } else {
          for(int k = 0; k < m; k++) {
            cout << w[j-1];
          }
          m = 1;
        }
      }
    }
    cout << '\n';
  }
  return 0;
}
