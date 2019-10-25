#include <iostream>

using std::cin;
using std::cout;

int silnia(int a);

int main() {
  int n, d, j, a, sil;
  cin >> n;
  for(int i = 0; i < n; i++) {
    cin >> a;
    if(a > 9) {
      d = 0;
      j = 0;
    } else {
      sil = silnia(a); //obliczanie silni tylko dla a < 9
      d = (sil%100-sil%10) / 10;
      j = sil % 10;
    }
    cout << d << " " << j << '\n';
  }
  return 0;
}

int silnia(int a) {
  int s = 1;
  if(a <= 1) {
    return 1;
  } else {
    for(int i = 2; i <= a; i++) {
      s *= i;
    }
    return s;
  }
}
/*przyspiszenie programu polega na nie liczeniu silni
dla liczb wiekszych niz 9,
poniewaz cyfra d i j zawsze bedzie 0 */
