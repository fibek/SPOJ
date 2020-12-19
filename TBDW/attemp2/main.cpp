#include <iostream>
#include <vector>

using namespace std;

/* vector<int> T; */
int T[1000] = {0};

void I(int x) {
    if( T[0] == 0 )
        T[0] = x;
    else {
        int i = 0;
        bool found = false;
        while( !found && T[i] != 0 )
           if( x < T[i] )
               i = 2*i + 1;
           else
               i = 2*i + 2;
        T[i] = x;
    }
}

void rD(int a) {
    int l = a*2+1;
    int p = a*2+2;
    int n;
    if( T[p] > 0 ) {
        T[a] = T[p];
        /* rD(p); */
        n = p;
    } else {
        T[a] = T[l];
        /* rD(l); */
        n = l;
    }
}

void D(int x) {
    bool found = false;
    int i = 0;
    while( !found ) {
        if( x < T[i] )
            i = 2*i + 1;
        else if( x > T[i] )
            i = 2*i + 2;
        else
            found = true;
    }
    rD(i);
}

      
int main() {
    int t,n,x;
    char ch;
    cin >> t >> n;
    /* T.resize(1000, 0); */
    for(int Tt = 0; Tt < t; Tt++) {
        cout << "test " << Tt+1 << endl;
        for(int N = 0; N < n; N++) {
            cin >> ch;
            switch(ch) {
                case 'I':
                    cin >> x;
                    I(x);
                    break;
                case 'D':
                    cin >> x;
                    D(x);
                    break;
                case 'S':
                    break;
                case 'X':
                    break;
                case 'N':
                    break;
                case 'P':
                    break;
                case 'R':
                    break;
                default:
                    cout << "not yet\n";
                    break;
            }
        }
        for(int i = 0; i <= 50; i++) 
         cout << T[i] << ' ';
        cout << endl;
    }
}

