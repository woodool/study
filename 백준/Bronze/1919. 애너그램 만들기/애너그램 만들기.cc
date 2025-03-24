#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int wd[26] = {};
	string a, b;
	cin >> a >> b;
	int total = 0;

	for (auto c : a)
		wd[c - 'a']++;
	for (auto c : b)
		wd[c - 'a']--;

	for (int i = 0; i < 26; i++)
		total += abs(wd[i]);
	
	cout << total;

}