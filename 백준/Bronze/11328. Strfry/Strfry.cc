#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	while (n--) {
		int wd[26] = {};
		string a, b;
		cin >> a >> b;

		for (auto c : a)
			wd[c - 'a']++;
		for (auto c : b)
			wd[c - 'a']--;
		
		bool possible = true;

		for (auto i : wd) {
			if (i != 0) possible = false;
		}

		if (possible) cout << "Possible\n";
		else cout << "Impossible\n";
	}
}