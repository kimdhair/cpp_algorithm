#include <iostream>
#include <string>

using namespace std;

int main() {
	int i;
	for (i = 0; i < 3; i++) {
		int n;
		int j = 1;
		cin >> n;
		while (1) {
			int k;
			int sum;
			int flag = 0;
			sum = n * j;
			string res = to_string(sum);
			for (k = 0; k < size(res); k++) {
				if (res[k] != '1') {
					flag = 1;
					break;
				}
			}
			if (flag == 0) {
				cout << size(res)<<endl;
				break;
			}
			j++;
		}
	}
}