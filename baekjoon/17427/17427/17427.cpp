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
// 6�� ����� 1,2,3,6 / 1~6���� for ���� ������ �������� �������� 0 / 1,2,3,6 / �ϴ� ó������ ������ Ž��
// n�� 1���� n���� ���� ����� ��