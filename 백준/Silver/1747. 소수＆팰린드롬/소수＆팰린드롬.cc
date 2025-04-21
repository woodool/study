#include <bits/stdc++.h>
using namespace std;

// 에라토스테네스의 체 사용 가능임. (메모리 차이가 난다고함)
bool prime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++) { // sqrt(num)을 사용 안하는게 나음
        if (num % i == 0) return false; // num에서 1을 제외하고 가장 작은 약수는 N제곱근 이하임.
                                       // 여기서 존재하면 소수가 아닌거니깐 O(N)을 O(N제곱근)으로 가능
    }
    return true;
}

bool pal(int num){ // 입력받은 정수를 string형으로 변환해서 비교
    string s = to_string(num);
    string a = s;
    reverse(a.begin(), a.end());
    return a == s;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    while(1){
        if (pal(n) && prime(n)){
            cout << n;
            break;
        }
        n++;
    }
}