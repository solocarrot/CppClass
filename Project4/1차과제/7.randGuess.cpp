#include <iostream>
#include <cstdlib>

int main() {
	int answer = (rand() % 100) + 1;
	int cnt = 1;
	int submitNum = (rand() % 100) + 1;
	int ceilingNum = 100;
	int floorNum = 0;

	std::cout << "I have specified one natural number less than or equal to 100. " << std::endl;

	while (submitNum != answer) {
		std::cout << "Guess the number and enter it : " << submitNum << std::endl;

		if (submitNum < answer) {
			std::cout << "The number I specified is a number greater than " << submitNum << std::endl;
			floorNum = submitNum;
			submitNum = (rand() % (ceilingNum - floorNum)) + (floorNum + 1) ;
			cnt++;
		}
		else if (submitNum > answer) {
			std::cout << "The number I specified is a number less than" << submitNum << std::endl;
			ceilingNum = submitNum;
			submitNum = (rand() % (ceilingNum - floorNum)) + (floorNum + 1);
			cnt++;
		}
	}
	if (cnt == 1) {
		std::cout << "Got it!!! You've succeeded in the  " << cnt << "-th time!" << std::endl;

	}
	else {
		std::cout << "Got it!!! You've succeeded in the  " << cnt << "-th times!" << std::endl;
	}
 
 //rand() 와 srand()의 차이는 srand가 70년 이후 지난시간을 기준으로 바꿔줘서 시드가 계속 바뀐다. 
 // 하지만 rand함수는 처음 시드가 정해져있어서 실행할때마다 같은값이나온다
	
}
