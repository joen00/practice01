//패턴찾기

#include <iostream>
using namespace std;

int vect[3][5] = {
	1,2,3,4,1,3,1,0,0,1,2,3,4,1,2
};
int pattern[3] = { 3,4,1 };

int ispattern(int x, int y) {

	for (int i = 0; i < 3; i++) {
		if (pattern[i] == vect[x][y + i])return 1;
		else return 0;
	}

}

int main() {

	for (int i = 0; i <= 2; i++) {
		for (int j = 0; j <= 2; j++) {
			int result = ispattern(i, j);
			if (result == 1) {
				cout << i << "," << j;
			}
		}
	}

	return 0;
}