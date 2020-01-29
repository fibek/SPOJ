#include <iostream>

using namespace std;

int euc(int a, int b) {
	if(b == 0) 
		return a;
	euc(b, a%b);
}

int main() {
	int n,a,b;
	cin >> n;
	for(int i = 0 ; i < n; i++) {
		cin >> a >> b;
		cout << euc(a, b) << '\n';
	}
}
