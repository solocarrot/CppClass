#include <iostream>
using namespace std;

bool sortedArray(int arr[], int MAX_LEN);

int main() {
	const int MAX_LEN = 5;
	int arr[MAX_LEN];
	for (int i = 0; i < 5; i++) {
		cin >> arr[i];
	}
	
	bool asnwer = sortedArray(arr, MAX_LEN);
	cout << asnwer;


}

bool sortedArray(int arr[], int MAX_LEN) {
	
	int big = arr[4];
	for (int i = 0; i < 4; i++) {
		if (arr[i] > arr[i+1]) {
			return false;
			break;
		}
		else {
			return true;
		}
	}
}