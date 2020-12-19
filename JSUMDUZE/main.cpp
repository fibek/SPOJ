#include <iostream>
#include <sstream>

using namespace std;

char hex(int a) {
    if( a < 10 ) 
        return char(a+48);
    
    if( a < 16 ) 
        return char(a+55);
}

string dectohex(long long a) {
    string out,dummy;
    int rem;
    while( a > 0 ) {
        rem = a % 16; 
        dummy = hex(rem);
        out.insert(0, dummy);
        a /= 16;
    }
    return out;
}

int dec(char s) {
    int asc = s;
    if( asc <= 57 )
        return asc-48;
    if( asc <= 70 )
        return asc-55;
}

string sum(string s, string s1) {
    int ss = s.size(), s1s = s1.size();
    const int i = (ss < s1s) ? ss : s1s;
    int sum;
    string tmp = "", dummy, out;
    for(int j = i-1; j >= 0; j--) {
        sum = dec(s[j]) + dec(s1[j]);
        if( tmp != "" )  
            sum += dec(tmp[0]);
        if( sum <= 15 ) {
            dummy = hex(sum);
            out.insert(0, dummy);
        } else {
            tmp = dectohex(sum);
            dummy = tmp[1];
            out.insert(0, dummy);
            tmp = tmp[0];
        }
    }
    dummy = tmp[0];
    out.insert(0, dummy);
    int tmp2;
    if( ss > s1s )  {
        tmp2 = ss - s1s;
        dummy = s.substr(0, tmp2);
        out.insert(0, dummy);
    } else {
        tmp2 = s1s - ss;
        dummy = s1.substr(0, tmp2);
        out.insert(0, dummy);
    }
    return out;
}

int main() {
    ios_base::sync_with_stdio(0);
    int t;
    long long a, b, n;
    string a,b;
    cin >> t;
    for(int test = 0; test < t; test++) {
        cin >> a >> b;
        string s = dectohex(a), s2 = dectohex(b);
        /* cout << hextodec( sum(s,s2) ) << endl; */
        /* std::istringstream(sum(s,s2)) >> std::hex >> n; */
        /* cout << std::dec << n << endl; */
    }
}

