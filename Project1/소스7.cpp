//Direct Addressing Table
#include <iostream>
using namespace std;
int main() {

	int bucket[200] = { 0 };
	char vect[7] = "ADBFAD";
	for (int i = 0; i < 6; i++) {
		bucket[vect[i]]++;
	}
	for (int i = 0; i < 200; i++) {
		if (bucket[i] > 0)cout << (char)(i) << bucket[i] << "°³" << endl;
	}

	return 0;
}