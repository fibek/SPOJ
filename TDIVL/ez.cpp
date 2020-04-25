#include <iostream>

using namespace std;

int main() {
	int n;
	unsigned long long a,b;
	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> a >> b;
		if( a % b == 0 )
			cout << "TAK\n";
		else 
			cout << "NIE\n";
	}
}

