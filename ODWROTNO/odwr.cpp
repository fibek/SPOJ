#include <iostream>

int x,y,tmp;

int euc(int a, int b, int x, int y);

int main() {
	int t, p, n;
	std::cin >> t;
	for(int i = 0; i < t; i++) {
		std::cin >> p >> n;
		std::cout << euc(n, p, 1, 0) << '\n';
		//euc(p,n,1,0);
	}
}

int euc(int a, int b, int x, int y) {
	if(b == 0) {
		if( x < 0 )
			return x+y;
		else 
			return x;	
	}
	//std::cout << a << ' ' << b << ' ' << x << ' ' << y << '\n';
	euc(b, a%b, y, x - a/b * y);				
} 
