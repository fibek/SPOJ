#include <iostream>
#include <vector>
#include <map>

using namespace std;

map<string, vector<string> > G;
map<string, bool> v;
bool found = false;

void path(string A, string B) { //dfs
    int i = 0;
    v[A] = true;
    if(!found) {
        for(int i = 0; i < G[A].size(); i++) {
            if( G[A][i] == B ) {
                found = true; 
                return;
            }
            if( !v[G[A][i]] )
                path(G[A][i], B);
        }    
    }
}
    

int main() {
    ios_base::sync_with_stdio(0);
    char ch;
    string s1,s2;
    while( cin >> ch && cin >> s1 && cin >> s2 ) {
        if( ch == 'T' ) {
            path(s1,s2);
            if( found )
                cout << "T\n";
            else
                cout << "N\n";
            found = false;
            v.clear();
        }
        if( ch == 'B' ) {
            G[s1].push_back(s2);
            G[s2].push_back(s1);
        }
    }
}

