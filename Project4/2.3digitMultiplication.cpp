#include <iostream>
using namespace std;

int main() {
	int n = 472;
	int m = 385;
	int array[6];
	bool isExist[6] = {};

	for (int i = 0; i < 3; i++) {
		int multi;
		multi = n * (m % 10);
		cout << multi << endl;
		m = m / 10;
		for (int j = 0; j < 4; j++) {
			if (isExist == true) {
				
			}
			array[5 - (j + i)] = multi % 10;
			isExist[5 - (j + i)] = true;
			multi = multi / 10;
		}
	}
}