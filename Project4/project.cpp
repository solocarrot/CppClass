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
//}
//
////3. 별찍기.
//
//#include <iostream>
//
//int main() {
//
//	int cnt;
//	std::cin >> cnt;
//
//	for (int k = 0; k < cnt; k++) {
//		int n;
//		std::cin >> n;
//		int blank = n - 1;
//		int star = ((n * 3) - 2) - (2 * blank);
//
//
//
//		for (int i = 0; i < n - 1; i++) {
//			for (int j = 0; j < blank; j++) {
//				std::cout << " ";
//			}
//			for (int j = 0; j < star; j++) {
//				std::cout << "*";
//			}
//			std::cout << std::endl;
//			blank--;
//			star += 2;
//		}
//
//		for (int i = 0; i < n; i++) {
//			for (int j = 0; j < star; j++) {
//				std::cout << "*";
//			}
//			std::cout << std::endl;
//		}
//
//		for (int i = 0; i < n - 1; i++) {
//			blank++;
//			star -= 2;
//			for (int j = 0; j < blank; j++) {
//				std::cout << " ";
//			}
//			for (int j = 0; j < star; j++) {
//				std::cout << "*";
//			}
//			std::cout << std::endl;
//		}
//	}
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

//// 4.구구단
//
//#include <iostream>
//
//int main() {
//
//	int n = 11;
//	int lineForNum = 4;
//	int nowNum = 1;
//
//	for (int p = 0; p <= (n / lineForNum) ; p++) {
//			for (int i = 1; i <= 7; i++) {
//				if (nowNum <= n) {
//					std::cout << nowNum << " * " << i << " = " << nowNum * i;
//					nowNum++;
//					for (int j = 0; j < lineForNum - 1; j++) {
//						std::cout << " ";
//						std::cout << nowNum << " * " << i << " = " << nowNum * i;
//						nowNum++;
//					}
//					std::cout << std::endl;
//					nowNum -= lineForNum;
//				}
//			}
//			nowNum += lineForNum;
//			std::cout << std::endl;
//	}
//		return 0;
//}
//
//// 5. 완전수와 소수출력
//
//#include <iostream>
//
//int main() {
//	using namespace std;
//	int num;
//	int nowNum = 11;
//	bool isDecimal = true;
//	bool isComplete = false;
//
//	std::cin >> num;
//
//	if (num < 5) {
//
//	}
//	else if (num > 5 && num < 10) {
//
//	}
//	else {
//
//	}
//
//	for (int i = nowNum; i <= num; i++) {
//		while (isDecimal == true) {
//			for (int j = 2; j < i / 2; j++) {
//				if (i % j == 0) {
//					isDecimal = false;
//				}
//			}
//			if (isDecimal == false) {
//				//소수가 아닌 수들에 대해서 완전수인지에 대한 검사를 진행
//				//소인수를 모두 구해서 더하는 코드
//				for (int k = 2; k <= j / 2; k++) {
//					if (j % k == 0 && k * k != j) {
//						numberElement += k;
//						numberElement += j / k;
//					}
//				}
//				cout << endl;
//				cout << "[C]" << 
//		}
//			else {
//				cout << 
//			}
//			}
//	}
//
//	for (int i = 2; i <= x; i++) {
//
//	}
//	
//	return 0;
//}

////완전수 구하는식
//#include <iostream>
//
//int main() {
//	int n;
//	std::cin >> n;
//
//
//	int elementSum;
//	bool isP;
//	
//	for (int i = 3; i <= n; i++) {
//		elementSum = 1;
//
//		for (int j = 2; j < i; j++) {
//			if (i % j == 0) {
//				elementSum += j;
//			}
//		}
//		if (elementSum == i) {
//			std::cout << "[C] " << i << " = 1 " ;
//			for (int j = 2; j < i; j++) {
//				if (i % j == 0) {
//					std::cout << "+ " << j << " ";
//				}
//			}
//			std::cout << std::endl;
//		}
//
//		isP = true;
//		for (int j = 2; j < i / 2; j++) {
//			if (i % j == 0) {
//				isP = false;
//			}
//		}
//		
//		if (isP == true && i > 10) {
//			std::cout << i << " ";
//		}
//	}
//}

// 6.재귀함수

#include <iostream>

using namespace std;

int main() {
    int cnt, val;
    cin >> cnt;

    for (int i = 0; i < cnt; ++i) {
        cin >> val;

        cout << "Backward :";
        printReverseDigit(val);

    //    cout << endl << "Forward :";
    //    printDigit(val);
    //    cout << endl;
    }
    return 0;
}

void printReverseDigit(int n) {
    if (n >= 10) {
        cout << n % 10;
        printReverseDigit(n / 10);
    }
    else {
        cout << n;
    }

}