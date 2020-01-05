#include <iostream>

using namespace std;

string tosys(int n, int sys);

int main() {
	int t, n;
	string out;
	cin >> t;
	for(int i = 0; i < t; i++) {
		cin >> n;
		cout << tosys(n, 16) << ' ' << tosys(n, 11) << '\n';
	}
}

// A = 11 ASCII A = 66 (- 55)

string tosys(int n, int sys) {
	string out, s;
	// str1.insert(0, str2);
	int tmp = n,
		tmp2, tmp3;
	out = "";
	do {
		tmp2 = tmp / sys;
		tmp3 = tmp - tmp2 * sys;
		if( tmp3 > 9 ) 
			s = char(tmp3+55);
		else if( tmp == 0)
			s = "";
		else
			s = to_string(tmp3);
		out.insert(0, s);
		tmp = tmp2;
	} while(tmp  >= sys); 
			
	if( tmp > 9 ) 
		s = char(tmp+55);
	else if( tmp == 0)
		s = "";
	else
		s = to_string(tmp);

	out.insert(0,s);

	return out;
}
