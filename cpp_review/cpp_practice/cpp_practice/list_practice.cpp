#include <iostream>
#include <list>

using namespace std;

//class Node {
//public:
//	int data;
//	Node* next;
//	Node* prev;
//};

int main() {
	list<int> myList = { 1,2,3,4,5 };

	cout << "����Ʈ�� ���: ";
	for (const int& element : myList) {
		cout << element << " ";
	}
	cout << endl;

	for (list<int>::iterator it = myList.begin(); it != myList.end(); ++it) {
		cout << *it << " ";
	}
	cout << endl;
}