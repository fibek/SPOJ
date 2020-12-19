#include <iostream>

using namespace std;

int n = 0;
int ciag(int s) {
    if( s == 1  )
        return n;
    if( s % 2 == 0 ) {
        n++;
        return ciag(s/2);
    } else {
        n++;
        return ciag(3*s+1);
    }
}

int main() {
    int t,s;
    cin >> t;
    for(int i = 0; i < t; i++) {
        cin >> s;
        cout << ciag(s) << endl;
        n = 0;
    }
}

