#include <iostream>

using std::cin;
using std::cout;

int main() {
  int a, b, c, n;
  cin >> n;
  for(int i = 0; i < n; i++) {
    cin >> a  >> b;
    a %= 10;
    if(a==2 || a==3 || a==7 || a==4) b %=4;
    if(a==4 || a==9) b %= 2;
    switch(a) {
      case 2:
      switch(b) {
        case 1: c = 2; break;
        case 2: c = 4; break;
        case 3: c = 8; break;
        case 0: c = 6; break;
      } break;
      case 3:
      switch(b) {
        case 1: c = 3; break;
        case 2: c = 9; break;
        case 3: c = 7; break;
        case 0: c = 1; break;
      } break;
      case 4:
      switch(b) {
        case 1: c = 4; break;
        case 0: c = 6; break;
      } break;
      case 7:
      switch(b) {
        case 1: c = 7; break;
        case 2: c = 9; break;
        case 3: c = 3; break;
        case 0: c = 1; break;
      } break;
      case 8:
      switch(b) {
        case 1: c = 8; break;
        case 2: c = 4; break;
        case 3: c = 2; break;
        case 0: c = 6; break;
      } break;
      case 9:
      switch(b) {
        case 1: c = 9; break;
        case 0: c = 1; break;
      } break;
      default:
      c = a;
      break;
    }
    cout << c << '\n';
  }

  return 0;
}
