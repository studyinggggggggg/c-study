#include <iostream>
using namespace std;

int main() {

	int num = 0;
	int menu = 0;

	cout << "***** ��ö���� ���� ���� ȯ���մϴ� *****\n";

	while (true) {
		cout << "«��: 1, ¥��: 2, ������: 3, ����: 4>>";
		cin >> menu;
		if (menu == 1) {
			cout << "���κ�?\n";
			cin >> num;
			cout << "«�� " << num << "�κ� ���Խ��ϴ�.\n";
		}
		else if (menu == 2) {
			cout << "���κ�?\n";
			cin >> num;
			cout << "¥�� " << num << "�κ� ���Խ��ϴ�.\n";
		}
		else if (menu == 3) {
			cout << "���κ�?\n";
			cin >> num;
			cout << "������ " << num << "�κ� ���Խ��ϴ�.\n";
		}
		else if (menu == 4) {
			cout << "���� �ϰڽ��ϴ�.....\n";
			break;
		}
		else {
			cout << "�ٽ� �ֹ��ϼ��� !!\n";
		}
	}
}