// 원하는 값 옆으로 밀고 원하는 자리에 넣기

#include <iostream>
#include <string>
using namespace std;


int main() {

	char vect[8] = { "abcdef" };
	int len = strlen(vect);

	for (int x = len; x >= 3; x--) {
		vect[x + 1] = vect[x];
	}
	vect[3] = 'T';
	cout << vect;

	return 0;
}