#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
  int n, m;
  cin >> n;
  for(int i = 0; i < n; i++) {
    cin >> m;
    if(m < 2) {
      cout << "NIE" << endl;
      continue;
    }
    for(int j = 2; j <= m; j++) {
      if (m%j==0){
    if (j==m) cout<<"TAK"<<endl;
    else cout<<"NIE"<<endl;
    break;
      }
    }
  }
}
