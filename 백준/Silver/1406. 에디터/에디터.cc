#include <bits/stdc++.h>
using namespace std;

// L : 커서 원쪽으로 한칸
// D : 커서를 오른쪽으로 한칸
// B : 커서 왼쪽에 있는 문자를 삭제
//    삭제로 인해 커서는 한칸 왼쪽으로 이동한 것처럼 나타나지만
//	  실제로 커서의 오른쪽에 있던 문자는 그대로
// P$ : $라는 문자를 커서 왼쪽에 추가

// 문자열이 주어지고(길이 N, 소문자, 100,000안남고)
// 2번째 줄에 입력할 명령어의 개수를 나타내는 정수 M(1 ~ 500,000)
// 3번째 줄부터 입력할 명령어 순서대로

// abcd
// 3
// P x
// L
// P y
// > abcdyx

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string a;
	cin >> a;
	list<char> b;
	for (auto c : a) b.push_back(c);
	auto cursor = b.end();
	int num;
	cin >> num;
	
	while (num--) {
		char order;
		cin >> order;
		if (order == 'P') {
			char add;
			cin >> add;
			b.insert(cursor, add);
		}
		else if (order == 'L') {
			if (cursor != b.begin()) cursor--;
		}
		else if (order == 'D') {
			if (cursor != b.end()) cursor++;
		}
		else {
			if (cursor != b.begin()) {
				cursor--;
				cursor = b.erase(cursor);
			}
		}
	}
	for (auto c : b)
        cout << c;
}