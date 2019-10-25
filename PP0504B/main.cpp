#include <iostream>
#include <cstring>

using std::cin;
using std::cout;

const int ArSize = 1001;

char* string_merge(char *s1, char *s2);

int main() {
  char s1[ArSize];
  char s2[ArSize];
  int t;
  char *s3;
  cin >> t;
  for(int i = 0; i < t; i++) {
    cin >> s1 >> s2;
    s3 = string_merge(s1, s2);
    cout << s3 << '\n';
  }

  return 0;
}

char* string_merge(char *s1, char *s2) {
  char *s3;
  int a, b, c, j;
  j = 0;
  a = strlen(s1);
  b = strlen(s2);
  s3 = new char [a+b+1];
  if (a < b) {
    c = a;
  } else {
    c = b;
  }
  int i, k;
  for(i = c, k = 0; i > 0; i--,k+=2) {
      s3[k] = *s1;
      s3[k+1] = *s2;
      s1++;
      s2++;
  }
  char *out;
  out = s3;
  return out;
  delete [] s3;
}
