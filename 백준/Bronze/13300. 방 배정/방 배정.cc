#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, k, ad = 0;
	int to[2][7] = {};

	cin >> n >> k;
	for (int i = 0; i < n; i++){
		int a, b;
		cin >> a >> b;
		to[a][b]++;
	}

	for (int i = 0; i < 2; i++) {
		for (int j = 1; j < 7; j++) {
			ad += to[i][j] / k;
			if (to[i][j] % k) ++ad;
		}
	}
	cout << ad;
}