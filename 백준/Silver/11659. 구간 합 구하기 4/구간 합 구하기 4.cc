#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N, M;
	cin >> N >> M;
	vector<int> Vec(N + 1);

	for (int i = 1; i <= N; i++) {
		int a;
		cin >> a;
		Vec[i] = Vec[i - 1] + a;
	}

	while (M--) {
		int b, c;
		cin >> b >> c;
		cout << Vec[c] - Vec[b - 1] << '\n';
	}
}