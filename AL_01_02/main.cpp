#include <iostream>
#include <cstring>

using std::cin;
using std::cout;
using std::string;
/*
TLE
Sprobuj z
http://discuss.spoj.com/t/12231-kolejka-al-01-02/10488
*/
int main() {
  int t, x, z;
  string s1, s2, s3;

  cin >> t;
  for(int i = 0; i < t; i++) {
    s2 = s3 = "";
    cin >> s1;
    x = s1.length();
    for(int j = 1; j < x+1; j++) {
      if( s1[j] > s1[j-1] ) {
        s2 += s1[j];
        for(int k = 1; k < s2.length(); k++) {
          if( (char)(s2[k]) > (char)(s2[k-1]) ) {
            s3 = s2[k];
          } else  {
            s3 += s2[k];
            continue;
          }
        }
      } else {
        continue;
      }
    }
    z = s3.length() - 1;
    for(int k = x-1; k > 1; k--) {
      if( s1[k] == s3[z] ) {
        for(int l = k+1; l < x; l++)
          s3 += s1[l];
        break;
      } else
        continue;
    }
    cout << s3 << '\n';
  }
}
