#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<int> G[1000];
bool visitdfs[1000] = {false};
bool visitbfs[1000] = {false};

void bfs(int node) {
	queue<int> q;
	int u;
	q.push(node);
	visitbfs[node] = true;
	while(!q.empty()) {
		u = q.front();
		cout << u << ' ';
		q.pop();
		for(int i = 0; i < G[u].size(); i++)
			if(!visitbfs[G[u][i]]) {
				visitbfs[G[u][i]] = true;
				q.push(G[u][i]);
			}
	}
}

void dfs(int node) {
	visitdfs[node] = true;
	cout << node << ' ';
	for(int i = 0; i < G[node].size(); i++) 
		if( !visitdfs[G[node][i]] )
			dfs(G[node][i]);
}

int main() {
	int t,n,m,a,b,v,s;
	cin >> t;
	for(int T = 0; T < t; T++) {
		cin >> n;
		for(int i = 1; i <= n; i++)
			G[i].clear();
		for(int i = 0; i < n; i++) {
			cin >> a >> m;
			for(int j = 0; j < m; j++){
				cin >> b;
				if(b == 0)
					G[a].push_back(a);
				else
					G[a].push_back(b);
			}
		}
		cout << "graph " << T+1 << '\n';
		cin >> v >> s;
		while(v != 0) {
			for(int i = 1; i <= n; i++) 
				visitdfs[i] = visitbfs[i] = false;
			if(s == 0) {
				dfs(v);
				cout << '\n';
			} else {
				bfs(v);
				cout << '\n';
			}
			cin >> v >> s;
		}
	}
}
