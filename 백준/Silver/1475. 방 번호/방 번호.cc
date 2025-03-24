#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int nm[10] = {};
	int n, total = 0;
	cin >> n;
	
	while (n) {
		nm[n % 10]++;
		n /= 10;
		
		if (nm[9] != 0) {
			nm[6] += nm[9];
			nm[9] = 0;
		}
	}
	nm[6] = (nm[6] + 1) / 2;

	for (int i = 0; i < 10; i++) {
		total = max(total, nm[i]);
	}
	cout << total;

}