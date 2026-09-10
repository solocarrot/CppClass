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

	for (int p = 0; p < n; p += lineForNum) {
		for (int i = 1; i <= 7; i++) {
			for (int j = p + 1; j <= p + 1 + lineForNum; j++) {
				std::cout << j << "*" << i << "=" << j * i;
				for (int k = 0; k < 3; k++) {
					std::cout << " ";
				}
			}
			std::cout << std::endl;
	}
	}
	return 0;
}