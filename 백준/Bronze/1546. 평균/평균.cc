#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, h = 0;
	cin >> n;
	float score[1000] = {};
	for (int i = 0; i < n; i++) {
		cin >> score[i];
		if (h < score[i])
			h = score[i];
	}
	float total = 0;
	for (int i = 0; i < n; i++) {
		total += (score[i] / h) * 100;
	}
	cout << total / n << endl;
}