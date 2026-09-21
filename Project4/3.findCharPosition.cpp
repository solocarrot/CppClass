#include <iostream>
using namespace std;

void printCharPosition(char str[], int MAX_LEN) {
	const int ALPHABET_CNT = 26;
	int alphabetFirstPosition[ALPHABET_CNT] = {};
	int nowPoint = 1;
	for (int pos = 0; pos < MAX_LEN && str[pos] != '\0'; pos++) {
		// 위치 저장하는 코드 구현
		if (alphabetFirstPosition[str[pos] - 'a'] == 0) {
			alphabetFirstPosition[str[pos] - 'a'] = nowPoint;
		}
		nowPoint++;
	}
	// 출력 코드 구현
	for (int pos = 0; pos < ALPHABET_CNT; pos++) {
		cout << alphabetFirstPosition[pos] << " ";
	}
}
int main() {
	const int STR_MAX_LEN = 100;
	char myCharArr[STR_MAX_LEN + 1]; // null저장을 위해 문자열의 최대 길이보다
	// 하나 더 큰 배열을 사용해야 함
	cin >> myCharArr;
	printCharPosition(myCharArr, STR_MAX_LEN);
	return 0;
}