#include <iostream>

using namespace std;

int main() {
	string s1,s2;
	int **sm;
	int D, n, m, tmp_max;
	cin >> D;
	for(int t = 0; t < D; t++) {
		cin >> m >> s1
			>> n >> s2;
		sm = new int*[n];
		for(int i = 0; i < n; i++)
			sm[i] = new int[m];
		tmp_max = 0;
		for(int i = 0; i < n; i++) 
			for(int j = 0; j < m; j++) 
				if(s1[j] == s2[i]) {
					if(i > 0 && j > 0)
						sm[i][j] = sm[i-1][j-1] + 1;
					else
						sm[i][j] = 1;
					tmp_max = sm[i][j];
				} else
					sm[i][j] = tmp_max;

		cout << sm[n-1][m-1];
		delete[] sm;
		cout << '\n';
	}
}
