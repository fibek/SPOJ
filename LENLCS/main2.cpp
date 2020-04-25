
#include <iostream>

using namespace std;

int main() {
	string s1,s2;
	int d, n, m;
	int subs[1001][1001] = {0};
	cin >> d;
	for(int t = 0; t < d; t++) {
		cin >> n >> s1
			>> m >> s2;
		for(int i = 1; i <= n; i++)
			for(int j = 1; j <= m; j++)
				if( s1[i-1] == s2[j-1] )
					subs[i][j] = subs[i-1][j-1] + 1;
				else
					subs[i][j] = max(subs[i-1][j], subs[i][j-1]);
		cout << subs[n][m] << '\n';
	}
}
