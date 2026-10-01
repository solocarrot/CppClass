#include <iostream>

int main() {

	int cnt;
	std::cin >> cnt;

	for (int k = 0; k < cnt; k++) {
		int n;
		std::cin >> n;
		int blank = n - 1;
		int star = ((n * 3) - 2) - (2 * blank);



		for (int i = 0; i < n - 1; i++) {
			for (int j = 0; j < blank; j++) {
				std::cout << " ";
			}
			for (int j = 0; j < star; j++) {
				std::cout << "*";
			}
			std::cout << std::endl;
			blank--;
			star += 2;
		}

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < star; j++) {
				std::cout << "*";
			}
			std::cout << std::endl;
		}

		for (int i = 0; i < n - 1; i++) {
			blank++;
			star -= 2;
			for (int j = 0; j < blank; j++) {
				std::cout << " ";
			}
			for (int j = 0; j < star; j++) {
				std::cout << "*";
			}
			std::cout << std::endl;
		}
	}
	return 0;
}