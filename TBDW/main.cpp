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
    node = T;
    k = 0;
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
  int *min = nullptr;
  int *max = nullptr;
  cin >> x;
  for(int i = 0; i < k; i++) {
    for(int l = 0; l < k; l++) {
      if(T[i] > T[l]) {
        min = &T[l];
        max = &T[i];
      }
    }
  }
  if(x == 0)
    cout << *min << '\n';
  else if(x == 1)
    cout << *max << '\n';
}

void N() {
  cin >> x;
  int ind = 0;
  while(T[ind] != x && ind < k-1)
    ind++;
  if(T[ind+1] == 0)
    cout << "-\n";
  else
    cout << T[ind+1] << '\n';
}

void P() {
  cin >> x;
  int ind = 0;
  while(T[ind] != x && ind < k)
    ind++;
  if(T[ind-1] == 0)
    cout << "-\n";
  else
    cout << T[ind-1] << '\n';
}

void R() {
  cin >> x;
  switch(x) {
    case 0: //inorder
      break;
    case 2: //preorder
      for(int i = 0; i < k; i++) {
        if(T[i] == 0)
          continue;
        else
          cout << T[i] << ' ';
        }
      break;
    case 1: //postorder
      for(int i = k; i >= 0; i--) {
        if(T[i] == 0)
          continue;
        else
          cout << T[i] << ' ';
        }
      break;
  }
}
