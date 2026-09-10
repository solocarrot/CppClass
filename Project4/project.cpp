////#include <iostream>
////using namespace std;
////
////int main() {
////	cout << "hello world" << endl;
////	return 0;
////}
//
////진수바꾸기
//
//#include <iostream>
//using namespace std;
//
//int main() {
//	int num = 1237;
//	cout << num << endl;
//	cout << oct << num << endl;
//	cout << hex << num << endl;
//
//	cout << showbase << oct << num << endl;
//	cout << showbase << hex << num << endl;
//
//}
//
////3. 별찍기.
//
//#include <iostream>
//
//int main() {
//	int num = 3;
//	int space = num - 1;
//	int variableStar = num;
//
//	for (int i = space; i <= 0; i--) {
//		std::cout << " " * i << "*" * variableStar << std::endl;
//		variableStar = variableStar + 2;
//		if (i == 0) {
//			for (int j = 0; j < num; j++) {
//				std::cout << "*" * variableStar << std::endl;
//			}
//		}
//		for (int j = 1; j < num; j++) {
//			space = j;
//		}
//	}
//
//
//}


//구구단

////3. 별찍기.
//
//#include <iostream>
//
//int main() {
//	int num = 3;
//	int space = num - 1;
//	int variableStar = num;
//
//	for (int i = space; i <= 0; i--) {
//		std::cout << " " * i << "*" * variableStar << std::endl;
//		variableStar = variableStar + 2;
//		if (i == 0) {
//			for (int j = 0; j < num; j++) {
//				std::cout << "*" * variableStar << std::endl;
//			}
//		}
//		for (int j = 1; j < num; j++) {
//			space = j;
//		}
//	}
//}

// 4.구구단

#include <iostream>

int main() {

	int n = 11;
	int lineForNum = 4;
	int nowNum = 1;

	for (int p = 0; p < (n / lineForNum) ; p++) {
		for (int i = 1; i <= 7; i++) {
			std::cout << nowNum << " * " << i << " = " << nowNum * i;
			nowNum++;
			for (int j = 0; j < lineForNum - 1; j++) {
				std::cout << " ";
				std::cout << nowNum << " * " << i << " = " << nowNum * i;
				nowNum++;
				}
			std::cout << std::endl;
			nowNum -= (lineForNum - 1);
			}
		}
		std::cout << std::endl;
		return 0;
	}

// 5. 완전수와 소수출력

//#include <iostream>
//
//int main() {
//	using namespace std;
//	int x;
//	int numberElement = 1;
//	bool isDecimal = true;
//	bool isComplete = false;
//
//	std::cin >> x;
//
//	for (int i = 2; i <= x; i++) {
//		for (int j = 2; j <= i / 2; j++) {
//			while (isDecimal == true) {
//				if (i % j == 0 && i / j > 1) {
//					isDecimal = false;
//				}
//			}
//			if (isDecimal == false) {
//				//소수가 아닌 수들에 대해서 완전수인지에 대한 검사를 진행
//				for (int k = 2; k <= j / 2; k++) {
//					if (j % k == 0 && k * k != j) {
//						numberElement += k;
//						numberElement += j / k;
//					}
//				}
//		}
//			}
//	}
//
//	for (int i = 2; i <= x; i++) {
//
//	}
//	
//	return 0;
//}
