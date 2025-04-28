#include <bits/stdc++.h>
using namespace std;

vector<int> adj[10004];
int D[10004];
int mx = 0;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, m;
	cin >> n >> m;
	while (m--) {
		int a, b;
		cin >> a >> b;
		adj[b].push_back(a);
	}
	for (int st = 1; st <= n; st++) {
		bool vis[10005] = { 0, };
		vis[st] = true;
		stack<int> S;
		S.push(st);
		int cnt = 1;
		while (!S.empty()) {
			int cur = S.top();
			S.pop();
			for (auto near : adj[cur]) {
				if (!vis[near]) {
					vis[near] = true;
					S.push(near);
					cnt++;
				}
			}
		}
		D[st] = cnt;
		mx = max(mx, cnt);
	}
	for (int i = 1; i <= n; i++) {
		if (D[i] == mx)
			cout << i << ' ';
	}
}