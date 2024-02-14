#include <iostream>
#include <string>

using namespace std;

//int main() {
//	int n;
//	while (1) {
//		string str_num = "";
//		cin >> n;
//		if (cin.eof()) break;
//		while (1) {
//			str_num += '1';
//			long long int_num = stoull(str_num);
//			if (int_num % n == 0) {
//				cout << size(str_num) << endl;
//				break;
//			}
//		}
//	}
//	return 0;
//}

int main() {
	int n;
	while (1) {
		int cnt = 1;
		long long ones = 0;
		cin >> n;
		if (cin.eof()) break;
		while (1) {
			ones = (ones * 10) % n + 1 % n;
			if (ones % n == 0) {
				cout << cnt << endl;
				break;
			}
			cnt++;
		}
	}
	return 0;
}