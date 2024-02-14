#include <iostream>
#include <list>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int num;
	vector<int> num_list;
	cin >> num;
	int in_num;

	for (int i = 0; i < num; i++) {
		cin >> in_num;
		num_list.push_back(in_num);
	}

	if (num == 1) {
		cout << in_num * in_num;
	}

	else {
		sort(num_list.begin(),num_list.end());
		cout << num_list[0] * num_list[size(num_list)-1];
	}

	//for (int i = 0; i < num_list.size(); i++) {
	//	cout << num_list[i]<<" ";
	//}
}