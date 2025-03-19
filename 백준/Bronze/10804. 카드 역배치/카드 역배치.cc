#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int arr[21];
	for (int i = 1; i <= 20; i++) arr[i] = i;
	for (int i = 1; i <= 10; i++) {
		int a, b;
		cin >> a >> b;
		reverse(arr + a, arr + b + 1); // reverse는 포인터(주소)값으로 넣어야 해서 저렇게 넣음
									// arr[a] 이거는 값이라 안됨
	}
	for (int i = 1; i <= 20; i++) cout << arr[i] << ' ';
}