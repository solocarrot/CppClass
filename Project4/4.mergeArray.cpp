//#include<iostream>
//using namespace std;
//
//bool readAscSortedArray(int[], int);
//void mergeArray(int[], int[], int[], int);
//void printArray(int[], int);
//
//int main() {
//    const int SIZE = 5;
//    int cnt, arr1[SIZE], arr2[SIZE], resultArr[SIZE * 2];
//    cin >> cnt;
//    for (int i = 0; i < cnt; ++i) 
//    {
//        if (readAscSortedArray(arr1, SIZE) && readAscSortedArray(arr2, SIZE)) 
//        {
//            mergeArray(arr1, arr2, resultArr, SIZE);
//            printArray(resultArr, SIZE * 2);
//        }
//        else 
//        { 
//            cout << "[Error] Unsorted input\n ";
//        }
//    }
//    return 0;
//}