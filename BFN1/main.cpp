#include <iostream>

using std::cout;
using std::cin;

bool pal(int n);

int main() {
  int t, n, count;
  cin >> t;
  for(int i = 0; i < t; i++) {
    cin >> n;
    if(pal(n)) {
      cout << n << " 0\n";
    } else {
      // while(!pal(n)) {
      //
      // }
      cout << "nie\n";
    }
  }
  return 0;
}

bool pal(int n) {
  if(n % 10 >= 0) {
    if (n % 11 == 0) {
      return true;
    } else {
      return false;
    }
  } else {
    return true;
  }
}
