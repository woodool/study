#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int arr[7];
	int result = 0;
	int minn = INT_MAX;
	bool Odd = false;

	for (int i = 0; i < 7; i++) cin >> arr[i];
	for (int i = 0; i < 7; i++) {
		if (arr[i] % 2 != 0) {
			result += arr[i];
			minn = min(minn, arr[i]);
			Odd = true;
		}
	}
	if (Odd) {
		cout << result << '\n';
		cout << minn;
	}
	else {
		cout << -1;
	}
}