#include <iostream>

using namespace std;

bool *primes;

int main() {
	int t;
	int L, U;
	cin >> t;
	for(int n = 0; n < t; n++) {
		cin >> L >> U;
		primes = new bool[U+1];
		for(int i = 2; i <= U; i++)
			primes[i] = false;
		for(int i = 2; i*i <= U; i++) 
			if(!primes[i])
				for(int k = i*i; k <= U; k += i)
					primes[k] = true;
		for(int i = L; i <= U; i++)
			if(!primes[i])
				cout << i << '\n';
		delete[] primes;
	}
}
