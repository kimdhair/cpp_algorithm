#include <iostream>

using namespace std;

//int main() {
//	int n;
//	int sum = 0;
//	cin >> n;
//	for (int i = 1; i < n + 1; i++) {
//		for (int j = 1; j < i + 1; j++) {
//			if (i % j == 0) {
//				sum += j;
//			}
//		}
//	}
//	cout << sum;
//}

int main() {
	int n;
	long long int sum = 0;
	cin >> n;
	for (int i = 1; i < n + 1; i++) {
		sum += (n / i) * i;
	}
	cout << sum;
}
// 1,3,4,7,6,12,8,15,13,18
// 6의 약수는 1,2,3,6 / 1~6까지 for 문을 돌려서 나눴을때 나머지가 0 / 1,2,3,6 / 일단 처음부터 끝까지 탐색
// n을 1부터 n까지 나눈 몫들의 합