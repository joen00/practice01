#include <iostream>
#include <cstring>
using namespace std;

int arr[3][3] = { 3,5,9,4,2,1,5,1,5 };

int isExist(int x) {

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (arr[i][j] == x) {
				return 1;
				break;
			}
		}
	}
	return 0;
}

int main() {

	int arr[3][3] = { 3,5,9,4,2,1,5,1,5 };
	int a, b, c;
	cin >> a >> b >> c;
	if (isExist(a) == 1) {
		cout << a << ":����" << endl;
	}
	else {
		cout << a << ":�̹߰�" << endl;
	}
	if (isExist(b) == 1) {
		cout << b << ":����" << endl;
	}
	else {
		cout << b << ":�̹߰�" << endl;
	}
	if (isExist(c) == 1) {
		cout << c << ":����" << endl;
	}
	else {
		cout << c << ":�̹߰�" << endl;
	}


	return 0;
}