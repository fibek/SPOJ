#include <iostream>
#include <cctype>

using namespace std;

int main() {
	int n, l_case = 0;
	int freq[53] = {0};
	string s;
	cin >> n;
	for(int l = 0; l <= n; l++) {
		cin.clear();
		getline(cin, s);
		for(int i = 0; i < s.size(); i++) {
			//( islower(s[i]) && !isspace(s[i]) ) ? l_case = 97 : l_case = 39;
			islower(s[i]) ? l_case = 97 : l_case = 38;
			if( l_case > 0 )
				freq[s[i]-l_case]++;
		}
	}
	for(int i = 0; i < 26; i++) 
		if( freq[i] != 0 )
			cout << char(i+97) << ' ' << freq[i] << '\n';
	for(int i = 26; i < 53; i++) 
		if( freq[i] != 0 )
			cout << char(i+38) << ' ' << freq[i] << '\n';
}
