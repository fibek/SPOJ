#include <iostream>

using namespace std;

const int n = 1000000;

bool prime[n] = {false};

int main() {
	int N,a,b,c, max = 0;
	int T[n] = {0};
	for(int i = 2; i*i <= n; i++)
		if(!prime[i])
			for(int k = i*i; k <= n; k += i)
				prime[k] = true;
	for(int i = 2; i <= n; i++) {
		if(!prime[i])
			T[i] = max = max+1;
		else
			T[i] = max;
	}
	cin >> N;
	for(int i = 0; i < N; i++) {
		c = 0;
		cin >> a >> b;
		cout << T[b] - T[a-1] << '\n';
	}
}
