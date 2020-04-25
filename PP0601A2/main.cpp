#include <iostream>

using namespace std;

int main() {
	int a,b = 42,i = 0;
	while( i < 3&&cin >> a ) {
		cout << a << '\n';
		if(a == 42 && b != 42)
			i++;
		b = a;
	}
}
