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

// 클래스형 멤버변수

#include <iostream>
#include <cstdlib>

using namespace std;

class DayOfYear
{
public:
	DayOfYear(int monthValue, int dayValue);
	DayOfYear(int monthValue);
	DayOfYear();
	void input();
	void output();
	int getMonthNumber();
	int getDay();
private:
	int month, day;
	void testDate();
};


int main() {
	DayOfYear date1(2, 21), date2(5), date3;
	cout << "초기화된 날짜들 : \n";
	date1.output(); cout << endl;
	date2.output(); cout << endl;
	date3.output(); cout << endl;

	date1 = DayOfYear(10, 31);
	cout << "재설정된 날짜는 : \n";
	date1.output(); cout << endl;
	return 0;
}

DayOfYear::DayOfYear(int monthValue, int dayValue) : month(monthValue), day(dayValue)
{
	testDate();
}

DayOfYear::DayOfYear(int monthValue) : month(monthValue), day(1)
{
	testDate();
}

DayOfYear::DayOfYear() : month(1), day(1)
{
	testDate();
}
void DayOfYear::output()
{
	cout << month << "월 " << day << "일";
}

void DayOfYear::testDate()
{
	if (month < 1 || (month > 12))
	{
		cout << "illegal month value \n";
		exit(1);
	}
	if ((day < 1) || (day > 31))
	{
		cout << "illegal day value\n";
		exit(1);
	}
}







