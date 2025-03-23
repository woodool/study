#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int az[26] = {};
	string word;
	cin >> word;
	for (auto c : word)
		az[c - 'a']++;
	for (int i = 0; i < 26; i++)
		cout << az[i] << ' ';
}