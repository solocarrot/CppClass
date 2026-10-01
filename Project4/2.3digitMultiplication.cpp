#include <iostream>
using namespace std;

int main() {
	int n;
	int m;
	cin >> n >> m;
	cout << endl;
	int sum = 0;
	int array[6];

	for (int i = 0, j = 1; i < 3; i++) {
		int multi;
		multi = n * (m % 10);
		cout << multi << endl;
		m = m / 10;
		sum += multi * j;
		j *= 10;
	}

	for (int i = 0; i < 6; i++) {
		array[5 - i] = sum % 10;
		sum = sum / 10;
	}

	for (int i = 0; i < 6; i++) {
		cout << array[i];
	}
}