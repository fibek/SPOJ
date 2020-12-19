#include <iostream>
#include <list>

using namespace std;

int fact(int a) ;

int main() {
	list<char> s;
	list<char>::iterator it;
	int t,k, tmp;
	cin >> t;
	for(int i = 0; i < t; i++) {
		cin >> k;
		tmp = fact(k);
		for(char l = 97; l <= k; l++)
			s.push_back(l);
		it = s.begin();
		for(int n = 0; n < tmp; n++) {
			for(int o = 0; o < k; o++, it++) {
				cout << *it;
			}
			it = s.begin();
		}	
	}
}

int fact(int a) {
	if( a > 1 )
		return a * fact(a-1);
	else
		return 1;
}
