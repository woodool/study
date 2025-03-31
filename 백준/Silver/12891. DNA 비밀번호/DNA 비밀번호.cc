#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int s, p;
	char word[1000000] = {};
	int must[4] = {};
	cin >> s >> p;
	cin >> word;
	for (int i = 0; i < 4; i++)
		cin >> must[i];

	int cnt = 0;
	int f = 0, l = p - 1;
	int have[4] = {};

	for (int i = 0; i < p; i++) {
		if (word[i] == 'A') have[0]++;
		else if (word[i] == 'C') have[1]++;
		else if (word[i] == 'G') have[2]++;
		else if (word[i] == 'T') have[3]++;
	}
	
	while (true) {
		if (have[0] >= must[0] && have[1] >= must[1] && have[2] >= must[2] && have[3] >= must[3])
			cnt++;

		if (l == s - 1) break;

		if (word[f] == 'A') have[0]--;
		else if (word[f] == 'C') have[1]--;
		else if (word[f] == 'G') have[2]--;
		else if (word[f] == 'T') have[3]--;

		f++; l++;

		if (word[l] == 'A') have[0]++;
		else if (word[l] == 'C') have[1]++;
		else if (word[l] == 'G') have[2]++;
		else if (word[l] == 'T') have[3]++;
	}

	cout << cnt << '\n';
}