//isExist
#include <iostream>
#include <string>
using namespace std;

int vect[5] = { 9,4,1,2,6 };

int isExist(int target) {
	for (int i = 0; i < 5; i++) {
		if(vect[i]==target){
			return 1;
		}
	}
}

int main() {

	int ret = isExist(1);
	if (ret == 1)cout << "발견";
	else cout << "미발견";

	return 0;
}