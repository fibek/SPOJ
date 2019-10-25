#include <iostream>
#include <cmath>

using std::cin;
using std::cout;

int main() {
  double r, d, s;
  cin >> r >> d;
  s = r - d/2;
  s = s * s * M_PI;
  cout << s << '\n';
  return 0;
}
