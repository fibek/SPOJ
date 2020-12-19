#include <iostream>
#include <sstream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    int t;
    long long a,b;
    string s1,s2,s3,s4;
    cin >> t;
    for(int i = 0; i < t; i++) {
        cin >> std::dec >> a >> b;
        cout << std::hex << a << endl;
    }
}

