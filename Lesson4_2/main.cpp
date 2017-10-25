#include <iostream>
#include <time.h>
#include <string>

using namespace std;

void main() {
	//1. 컴퓨터는 랜덤하게 0 ~ 2 까지의 수를 가질 수 있다.
	//2. 0은 바위, 1은 가위, 2는 보 라고 가정한다
	//3. 플레이어도 0 ~ 2 범위안에서 입력을 할 수 있다
	//4. 이겼는지, 비겼는지, 졌는지를 출력해보자
	srand(time(NULL));
	int player;
	int computer = rand() % 3;
	string stringCom = "";
	
	switch (computer) {
	case 0:
		stringCom = "바위";
		break;
	case 1:
		stringCom = "가위";
		break;
	case 2:
		stringCom = "보";
		break;
	default:
		break;
	}
	cout << "가위바위보 게임" << endl << "0.바위	1.가위	2.보" << endl;
	cout << "선택 : ";
	cin >> player;
	if (player >= 0 && player < 3) {
		cout << "컴퓨터 : " << stringCom << endl;
		if (player == computer) {
			cout << "비겼습니다." << endl;
		}
		else if (player - computer == -1 || player - computer == 2) {
			cout << "Player 승!" << endl;
		}
		else if (player - computer == 1 || player - computer == -2) {
			cout << "Computer 승!" << endl;
		}
	}
	else {
		cout << "잘못입력하셨습니다. 0, 1, 2 중 하나의 값을 입력하세요." << endl;
	}

	system("pause");
}
