#include <iostream>
#include <cstring>

using std::cin;
using std::cout;
using std::string;

int main() {
  int t, x;
  char s1[20];
  string s2 = "";
  cin >> t;
  for(int i = 0; i < t; i++) {
    cin >> s1;
    x = strlen(s1);
    for(int j = 1; j < x+1; j++) {
      if( (char)(s1[j]) > (char)(s1[j-1]) ) {
        s2 += s1[j];
        for(int k = 0; k < s2.length(); k++) {
          if( (char)(s1[k]) > (char)(s2[k]) ) {
            s2 += s2[j];
          } else
            continue;
        }
      } else {
        continue;
      }
    }
    cout << s2 << '\n';
    s2 = "";
  }
}
