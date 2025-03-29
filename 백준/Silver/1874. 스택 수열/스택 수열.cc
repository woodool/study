#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	stack<int> Stack;
	cin >> n;
	int cnt = 1;
	string total;

	while (n--) {
		int a;
		cin >> a;
		while (cnt <= a) {
			Stack.push(cnt++);
			total += "+\n";
		}
		if (Stack.top() != a) {
			cout << "NO";
			return 0;
		}
		Stack.pop();
		total += "-\n";
	}
	cout << total;
}