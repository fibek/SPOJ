#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n, a, b,
		l, r, m,
		tmp;
	vector<int> c;
	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> a >> b;
		for(int k = 1; k <= a; k++)
			c.push_back(k);
		l = 0;
		r = c.size() - 1;
		m = (l+r) / 2;
		tmp = b * c[m];
		while(l <= r && tmp != a ) {
			tmp = b * c[m];
			if( tmp > a ) { 
				r = m - 1;
				m = (r+l) / 2;
			} else if( tmp < a ) {
				l = m + 1;
				m = (r+l) / 2;
			}
		}
		if( tmp == a )
			cout << "TAK\n";
		else 
			cout << "NIE\n";
	}
}
