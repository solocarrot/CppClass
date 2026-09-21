//#include <iostream>
//using namespace std;
//
//int main() {
//	int array[32];
//	int arrayPoint = 31;
//	
//	int m;
//	cin >> m;
//	for (int j = 0; j < m; j++) {
//		int n;
//		cin >> n;
//		//하나의 for문에서 n을 줄임과 동시에 배열에 나머지값을 집어넣어야됨'
//
//		for (;n > 0;n = n / 2, arrayPoint--) {
//			array[arrayPoint] = n % 2;
//		}
//
//		for (int i = arrayPoint + 1; i < 32; i++) {
//			if (i % 4 == 0) {
//				cout << " ";
//			}
//			cout << array[i];
//		}
//		cout << endl;
//	}
//	return 0;
//}