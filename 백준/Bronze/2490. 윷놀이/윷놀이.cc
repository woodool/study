#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int a;
	string yo = "DCBAE";

	for (int i = 0; i < 3; i++){
		int re = 0;
		for (int i = 0; i < 4; i++) {
			cin >> a;
			re += a;
		}
		cout << yo[re] << '\n';
	}
}