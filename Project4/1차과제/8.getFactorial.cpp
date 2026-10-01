#include <iostream>

int getToFor(int n);
void getToRecursive(int n, int sum = 1);

int main() {

	int cnt;
	std::cin >> cnt;

	for (int i = 0; i < cnt; i++) {
		int n;
		std::cin >> n;
		int forSum = getToFor(n);
		std::cout << "interation = " << forSum << std::endl;
		int recursivceSum = getToRecursive::sum;
		std::cout << "recursive = " << recursiveSum << std::endl;
	}


	return 0;

}

int getToFor(int n) {

	int getToFor = 1;

	for (int i = n; n >= 2; n--) {
		getToFor *= n;
	}

	return getToFor;

}

void getToRecursive(int n, int sum) {
	if (n > 1) {
		n--;
		getToRecursive(n, sum);
	}
	sum *= n;
}
