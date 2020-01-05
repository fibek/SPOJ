#include <iostream>
int main(){std::string s;for(int i=0;i<10;i++){int c=0,a=1;std::cin >> s;for(int k=0;k<s.size(); k++)if(s[k] == 'L' || s[k] == 'F' || s[k] == 'T' || s[k] == 'D'){c++;a*=2;}std::cout<<a<<'\n';}}
