#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N, M;
	int cnt = 0;
	cin >> N >> M;
	int arr[15000] = {};

	for (int i = 0; i < N; i++)
		cin >> arr[i];

	sort(arr, arr + N);

	int start = 0; int end = N - 1;
	while (end > start) {
		int total = arr[start] + arr[end];
		if (total < M)
			start++;
		else if (total > M)
			end--;
		else if (total == M) {
			cnt++;
			start++;
			end--;
		}
	}
	cout << cnt;
}