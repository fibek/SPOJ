#include <iostream>
#include <map>
#include <utility>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

struct punkt {
    int x, y;
    string name;
    punkt() {}
    punkt(int xx, int yy, string zz) {
        x = xx; y = yy; name = zz;
    }
};

bool comppunkt(const punkt &a, const punkt &b) {
    return sqrt( (a.x * a.x) + (a.y * a.y) ) < sqrt( (b.x * b.x) + (b.y * b.y) );
}


//uzyj tw Pitagorasa w celu wyznaczenia prawidlowej odleglosci od srodka
bool center(const pair<int, int> &a, const pair<int, int> &b) {
    return a.first < b.first;
}


int main() {
    int x, y, n, t;
    string name;
    vector<punkt> M;
    vector<punkt>::iterator it;
    cin >> t;
    for(int test = 0; test < t; test++) {
        cin >> n;
        M.resize(n);
        for(int lp = 0; lp < n; lp++) {
            cin >> name >> x >> y;
            M[lp] = punkt(x, y, name);     
        }
        sort(M.begin(), M.end(),comppunkt);
        for(it = M.begin(); it != M.end(); it++) 
            cout << it->name << ' ' << it->x << ' ' << it->y << endl;
        M.clear();
        getchar();
        cout << endl;
    }
}

