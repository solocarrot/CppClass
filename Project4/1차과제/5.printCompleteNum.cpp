#include <iostream>

int main() {
	int cnt;
	std::cin >> cnt;

	for (int k = 0; k < cnt; k++) {
		int n;
		std::cin >> n;


		int elementSum;
		bool isP;
		bool printP = true;

		for (int i = 3; i <= n; i++) {
			elementSum = 1;

			for (int j = 2; j < i; j++) {
				if (i % j == 0) {
					elementSum += j;
				}
			}
			if (elementSum == i) {
				if (printP == false) { std::cout << std::endl; }
				printP = true;
				std::cout << "[C] " << i << " = 1 ";
				for (int j = 2; j < i; j++) {
					if (i % j == 0) {
						std::cout << "+ " << j << " ";
					}
				}
				std::cout << std::endl;
			}

			isP = true;
			for (int j = 2; j < i / 2; j++) {
				if (i % j == 0) {
					isP = false;
				}
			}

			if (isP == true && i > 10) {
				if (printP == true) {
					printP = false;
					std::cout << "[P] ";
				}
				std::cout << i << " ";
			}
		}
	}
	return 0;
}