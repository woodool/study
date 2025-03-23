#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int nms[201] = {};
	int n, v;
	cin >> n;
	
	while (n--) {
		int t;
		cin >> t;
		nms[100 + t]++;
	}
	cin >> v;
	cout << nms[100 + v];
}