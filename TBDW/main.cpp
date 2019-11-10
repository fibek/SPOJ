#include <iostream>
#include <algorithm>

using std::cin;
using std::cout;
using std::sort;

void I();
void D();
void S();
void X();
void N();
void P();
void R();

const int AR_SIZE = 10001;
int *T;
int x;

int main() {
  int t, n;
  char ch;
  cin >> t;
  cin >> n;
  for(int i = 0; i < t; i++) {
    T = new int [AR_SIZE];
    cout << "test " << i+1 << '\n';
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
    delete [] T;
  }
}
void I(){
  int i = 1;
  bool a = false;
  cin >> x;
  while(!a) {
    if(T[i] == 0) {
      T[i] = x;
      a = true;
    } else if(x < T[i]) {
      i *= 2;
    } else {
      i = 2 * i + 1;
    }
  }
}

void S() {
  cin >> x;
  int i = 1;
  while(T[i] != x) {
    cout << T[i] << ' ';
    if(T[i] == -1)
      continue;
    else if(x < T[i])
      i *= 2;
    else
      i = 2 * i + 1;
  }
  cout << T[i] << '\n';
}

void D() {
  cin >> x;
  int i = 1;
  while(T[i] != x) {
    if(x < T[i])
      i *= 2;
    else
      i = 2 * i + 1;
  }
  T[i] = -1;
}

void X() {
  cin >> x;
  int i = 1;
  if(x == 0) {
    while(T[i] != 0)
      i *= 2;
    i = (i/2);
  } else {
    while(T[i] != 0)
      i = i * 2+ 1;
    i = (i / 2);
  }

  cout << T[i] << '\n';
}

void N() {
  cin >> x;
}

void P() {
  cin >> x;
}

void R() {

}
