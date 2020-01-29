#include <iostream>

using namespace std;

int euc(int a, int b) {
	int tmp;
	while( b != 0 ) {
		tmp = b;
		b = a % b;
		a = tmp;
	}
	return a;
}

int main() {
	int n,a,b;
	cin >> n;
	for(int i = 0 ; i < n; i++) {
		cin >> a >> b;
		cout <<	2 * euc(a, b) << '\n';
	}
}
