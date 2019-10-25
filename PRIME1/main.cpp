#include <iostream>

using std::cin;
using std::cout;

bool is_prime(int n);

int main() {
  int t, n;
  long m;
  cin >> t;
  for(int i = 0; i < t; i++) {
    cin >> m >> n;
    for(int j = m; j <= n; j++) {
      if (is_prime(j))
        cout << j << '\n';
      else
        continue;
    }
    cout << '\n';
  }

  return 0;
}

bool is_prime(int n) {
	if(n<2)
		return false; //gdy liczba jest mniejsza niż 2 to nie jest pierwszą

	for(int i=2;i*i<=n;i++)
		if(n%i==0)
			return false; //gdy znajdziemy dzielnik, to dana liczba nie jest pierwsza
	return true;
}
