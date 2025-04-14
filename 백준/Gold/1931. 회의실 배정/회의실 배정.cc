#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	pair<int, int> s[100005]; // 끝, 시작 순
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> s[i].second >> s[i].first;
	sort(s, s + n);

	int cnt = 0;
	int t = 0;
	for (int i = 0; i < n; i++) {
		if (t > s[i].second) continue;
		cnt++;
		t = s[i].first;
	}
	cout << cnt;
}