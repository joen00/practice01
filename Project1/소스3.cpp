// ���ϴ� �� ������ �а� ���ϴ� �ڸ��� �ֱ�

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