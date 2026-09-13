#include <iostream>

int main() {
	int cnt;
	std::cin >> cnt;

	for (int i = 0; i < cnt; i++) {
		float num;
		std::cin >> num;
		bool isPlus = true;

		int intNum;
		float floatNum;


		intNum = (int)num;
		std::cout << intNum << " + ";

		floatNum = num - intNum;
		std::cout << floatNum;
		std::cout << std::endl;
	}
	return 0;
}
 