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

//3. 별찍기.

#include <iostream>

int main() {
	int num = 3;
	int space = num - 1;
	int variableStar = num;

	for (int i = space; i <= 0; i--) {
		std::cout << " " * i << "*" * variableStar << std::endl;
		variableStar = variableStar + 2;
		if (i == 0) {
			for (int j = 0; j < num; j++) {
				std::cout << "*" * variableStar << std::endl;
			}
		}
		for (int j = 1; j < num; j++) {
			space = j;
		}
	}


}