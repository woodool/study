#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, Y = 0, M = 0;
	cin >> n;
	vector<int> call(n);
	for (int i = 0; i < n; i++) cin >> call[i];
	for (int i = 0; i < n; i++) Y += (call[i] / 30 + 1) * 10;
	for (int i = 0; i < n; i++) M += (call[i] / 60 + 1) * 15;
	if (Y > M) cout << "M " << M;
	else if (Y < M) cout << "Y " << Y;
	else cout << "Y M " << Y;
}