#include <iostream>
#include <time.h>
#include <string>

using namespace std;

void main() {
	//1. ��ǻ�ʹ� �����ϰ� 0 ~ 2 ������ ���� ���� �� �ִ�.
	//2. 0�� ����, 1�� ����, 2�� �� ��� �����Ѵ�
	//3. �÷��̾ 0 ~ 2 �����ȿ��� �Է��� �� �� �ִ�
	//4. �̰����, ������, �������� ����غ���
	srand(time(NULL));
	int player;
	int computer = rand() % 3;
	string stringCom = "";
	
	switch (computer) {
	case 0:
		stringCom = "����";
		break;
	case 1:
		stringCom = "����";
		break;
	case 2:
		stringCom = "��";
		break;
	default:
		break;
	}
	cout << "���������� ����" << endl << "0.����	1.����	2.��" << endl;
	cout << "���� : ";
	cin >> player;
	if (player >= 0 && player < 3) {
		cout << "��ǻ�� : " << stringCom << endl;
		if (player == computer) {
			cout << "�����ϴ�." << endl;
		}
		else if (player - computer == -1 || player - computer == 2) {
			cout << "Player ��!" << endl;
		}
		else if (player - computer == 1 || player - computer == -2) {
			cout << "Computer ��!" << endl;
		}
	}
	else {
		cout << "�߸��Է��ϼ̽��ϴ�. 0, 1, 2 �� �ϳ��� ���� �Է��ϼ���." << endl;
	}

	system("pause");
}
