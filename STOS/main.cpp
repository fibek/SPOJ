#include <iostream>

using std::cin;
using std::cout;

int a, n;
int stack[11];

void pop();
void push();

int main() {
  n = 0;
  char ch;
  while(cin>>ch) {
    switch(ch) {
      case '+':
        push();
        break;
      case '-':
        pop();
        break;
    }
  }
  return 0;
}

void push() {
  cin >> a;
  if(n < 10) {
    n++;
    stack[n] = a;
    cout << ":)\n";
  } else {
    cout << ":(\n";
  }

}

void pop() {
  if(n >= 1) {
    cout << stack[n] << '\n';
    n--;
  } else {
    cout << ":(\n";
  }
}
