#include <iostream>

int main() {
	int cnt;
	std::cin >> cnt;

	for (int k = 0; k < cnt; k++) {

		int n , secondNumber,lineForNum;
		std::cin >> n >> secondNumber >> lineForNum;
		int nowNum = 1;

		for (int p = 0; p <= (n / lineForNum); p++) {
			for (int i = 1; i <= secondNumber; i++) {
				std::cout << nowNum << " * " << i << " = " << nowNum * i;
				nowNum++;
				for (int j = 0; j < lineForNum - 1; j++) {
					if (nowNum <= n) {
						std::cout << "	";
						std::cout << nowNum << " * " << i << " = " << nowNum * i;
						nowNum++;
					}
				}
				std::cout << std::endl;
				if (p == (n / lineForNum)) { nowNum -= (nowNum - (lineForNum * p + 1)); }
				else { nowNum -= lineForNum; }
			}
			nowNum += lineForNum;
			std::cout << std::endl;
		}
	}
	return 0;
}