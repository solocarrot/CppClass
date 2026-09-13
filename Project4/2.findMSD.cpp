#include <iostream>

int main() {

	int cnt;
	std::cin >> cnt;

	for (int i = 0; i < cnt; i++) {
		int num;
		std::cin >> num;

		int intLength = 1;

		while ((num / 10) != 0) {
			num = num / 10;
			intLength++;
		}

		std::cout << num % 10 << " @ [" << intLength << "]" << std::endl;
	}
	return 0;
}