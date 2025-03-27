#include <bits/stdc++.h>
using namespace std;

// 정수가 "0"일 경우에 지울 수 있는 수가 있음을 보장할 수 있다.

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int K, total = 0;
	stack<int> S;
	cin >> K;

	while (K--) {
		int a;
		cin >> a;
		if (a == 0) S.pop();
		else S.push(a);
	}

	while (!S.empty()) {
		total += S.top();
		S.pop();
	}
	cout << total;
	
}