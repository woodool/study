#include <bits/stdc++.h>
using namespace std;


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
 
	int n, m, k, x;
	cin >> n >> m >> k >> x;
	int a, b;
	bool exist = false;

	vector<vector<int>> graph(n + 1);
	vector<int> dis(n + 1, -1);

	for (int i = 0; i < m; i++) {
		int from, to;
		cin >> from >> to;
		graph[from].push_back(to);
	}

	queue<int> q;
	q.push(x);
	dis[x] = 0;

	while (!q.empty()) {
		int a = q.front();
		q.pop();
		for (auto next : graph[a]) {
			if (dis[next] == -1) {
				dis[next] = dis[a] + 1;
				q.push(next);
			}
		}
	}
	for (int i = 0; i <= n; ++i) {
		if (dis[i] == k) {
			cout << i << '\n';
			exist = true;
		}
	}
	if (!exist)
		cout << -1;
}