#include <iostream>

using namespace std;
//
//class TestClass{
//public :
//	void print();
//	void setNum(int n) { num = n ;  }
//	void setArrItem(int i, int n) { arr[i] = n; }
//private :
//	int num = 33 ;
//	static const int CAPACITY = 10;
//	int arr[CAPACITY] = { 99,77 };
//};
//
//void TestClass::print() {
//	printf("%d %d\n", num, arr[0]) ;
//}
//
//void test(TestClass &curT) {
//	curT.setNum(88);
//	curT.setArrItem(0, 44);
//	curT.print();
//}
//int main()
//{
//	TestClass srcT;
//	srcT.print();
//	test(srcT);
//	srcT.print();
//	return 0;
//
//}

//#include <iostream>
//
//int main() {
//	int val1 = 8, val2 = 3;
//	int* pint1, * pint2;
//
//	double x = 1.7, * pDouble = &x; //p더블이가지는 값은 x의주소값임.
//
//	char c = 'a', * pChar = &c;
//
//	pint1 = &val1;
//	std::cout << pint1 << " " << *pint1 << std::endl;
//	std::cout << &val1 << " " << val1 << std::endl;
//
//	int* pintArr = new int[20];
//
//	delete[] pintArr;
//
//	int* p1, * p2;
//
//	p1 = new int;
//	*p1 = 42;
//	p2 = p1;
//
//	std::cout << "*p1 ==" << *p1 << std::endl;
//	std::cout << "*p2 ==" << *p2 << std::endl;
//
//	*p2 = 53;
//	std::cout << "*p1 ==" << *p1 << std::endl;
//	std::cout << "*p2 ==" << *p2 << std::endl;
//
//	double* pD;
//	pD = new double;
//
//	delete pD;
//
//	int* p;
//	p = new int[5];
//
//	delete[] p;
//
//
//
//}

//typedef int* intPointer;
//void sneaky(intPointer temp);
//
//int main()
//{
//	intPointer p;
//
//	p = new int;
//	*p = 77;
//
//	cout << "before call to fuction*p ==" << *p << endl;
//
//	sneaky(p);
//
//	cout << "Afetr == " << *p << endl;
//
//	return 0;
//}
//
//void sneaky(intPointer temp)
//{
//	*temp = 99;
//	cout << "insdie fuction *temp == " << temp << endl;
//}

int main()
{
	const int MAX = 10;
	double* dPtr = new double[MAX];
	printf("%p %p", dPtr, dPtr + 1);
	return 0;
}