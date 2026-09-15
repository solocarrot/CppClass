//// 정적배열의 이해
//
//#include <iostream>
//
//using namespace std;
//
//void funct1(int &n) {
//	n = 999;
//}
//
//void funct2(int list[]) {
//	list[0] = 999;
//}
//
////int* funct3() {
////	int arr[10] = { 1,1,1,1,1,1,1 };
////	return arr;
////}
//
//int main() {
//	const int ARR_MAX = 10;
//	int arr[ARR_MAX] = {0 };
//
//	funct1(arr[0]);
//	cout << arr[0] << endl;
//
//	funct2(arr);
//	cout << arr[0] << endl;
//
//	// arr = funct3();
//}

//// 배열을 이용해서 학생의 평균점수구하기.
//
//#include <iostream>
//using namespace std;
//
//void readNumbers(int arr[], int maxSize, int endCond, int& readSize);
//double getAverage(const int arr[], int arrSize);
//
//int main() {
//	const int MAX_STD_NUM = 10;
//	int stdScoreList[MAX_STD_NUM] = {}, stdNum;
//
//	cout << "학생 점수 입력 ( 최대 " << MAX_STD_NUM << "개, 종료는 -1)";
//	readNumbers(stdScoreList, MAX_STD_NUM, -1, stdNum);
//	cout << "평균점수는 " << getAverage(stdScoreList, stdNum);
//}

