#include <iostream>
#include <string>

using namespace std;

int main() {
	string menu;
	int num = 0;
	int sum = 0;

	cout << "���������� 2000��, �Ƹ޸�ī�� 2300��, īǪġ�� 2500���Դϴ�.\n";
	while (sum < 20000) {
		cout << "�ֹ�>>";
		cin >> menu >> num;

		if (menu == "����������") {
			cout << 2000 * num << "���Դϴ�. ���ְ� �弼��.\n";
			sum += 2000 * num;
		}
		else if (menu == "�Ƹ޸�ī��") {
			cout << 2300 * num << "���Դϴ�. ���ְ� �弼��.\n";
			sum += 2300 * num;
		}
		else if (menu == "īǪġ��") {
			cout << 2500 * num << "���Դϴ�. ���ְ� �弼��.\n";
			sum += 2500 * num;
		}
		else {
			cout << "�߸��� �޴� �ֹ��Դϴ�.\n";
		}
	}
	cout << "���� " << sum << "���� �Ǹ��Ͽ� ī�並 �ݽ��ϴ�. ���Ϻ��� ~~~~\n";
}