#include <iostream>
#include <string.h>

using std::cin;
using std::cout;

void I();
void D();
void S();
void X();
void N();
void P();
void R();

const int AR_SIZE = 10000;
int T[AR_SIZE];
int x, k = 0;
int *node = T;
int main() {
  int t, n;
  char ch;
  cin >> t;
  cin >> n;
  for(int i = 0; i < t; i++) {
    for(int l = 0; l < n; l++) {
      cin >> ch;
      switch(ch) {
        case 'I': I(); break;
        case 'D': D(); break;
        case 'S': S(); break;
        case 'X': X(); break;
        case 'N': N(); break;
        case 'P': P(); break;
        case 'R': R(); break;
      }
    }
    node = T;
    k = 0;
    cout << "test " << i+1 << '\n';
  }
}
void I(){
  cin >> x;
  *node = x;
  node++;
  k++;
}

void S() {
  cin >> x;
  int i;
  for(i = 0; i < k+1; i++) {
    if(T[i] == x) {
      for(int l = 0; l < i+1; l++) {
        if(T[l] == 0)
          continue;
        else
          cout << T[l] << ' ';
      }
      cout << '\n';
      return;
    }
    if(T[i] == 0)
      continue;
  }
  cout << "-\n";
}

void D() {
  cin >> x;
  int i = 0;
  while(T[i] != x && i < k+1) {
    i++;
  }
  T[i] = 0;
}

void X() {

}

void N() {

}

void P() {

}

void R() {

}
