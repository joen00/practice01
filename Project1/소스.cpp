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
		cout << a << ":존재" << endl;
	}
	else {
		cout << a << ":미발견" << endl;
	}
	if (isExist(b) == 1) {
		cout << b << ":존재" << endl;
	}
	else {
		cout << b << ":미발견" << endl;
	}
	if (isExist(c) == 1) {
		cout << c << ":존재" << endl;
	}
	else {
		cout << c << ":미발견" << endl;
	}


	return 0;
}