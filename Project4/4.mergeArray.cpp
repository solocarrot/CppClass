#include<iostream>
using namespace std;

bool readAscSortedArray(int[], int);
void mergeArray(int[], int[], int[], int);
void printArray(int[], int);

int main() {
    const int SIZE = 5;
    int cnt, arr1[SIZE], arr2[SIZE], resultArr[SIZE * 2];
    cin >> cnt;
    for (int i = 0; i < cnt; ++i) 
    {
        if (readAscSortedArray(arr1, SIZE) && readAscSortedArray(arr2, SIZE)) 
        {
            mergeArray(arr1, arr2, resultArr, SIZE);
            printArray(resultArr, SIZE * 2);
        }
        else 
        { 
            cout << "[Error] Unsorted input\n ";
        }
    }
    return 0;
}

bool readAscSortedArray(int arr[], int size) {
    {
        for (int i = 0; i < size - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                return false;
                break;
            }
            else
            {
                return true;
            }
        }
    }
}

void mergeArray(int arr1[], int arr2[], int resultArr[], int size)
{
    for (int i, j = 0; i + j < size * 2;) 
    {
        if (arr1[i] >= arr2[i]) 
        {
            resultArr[i + j] = arr1[i];
            i++;
        }
        else 
        {
            resultArr[i + j] = arr2[j];
            j++;
        }
    }

}
