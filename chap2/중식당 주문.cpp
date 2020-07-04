#include <iostream>
using namespace std;

int main() {

	int num = 0;
	int menu = 0;

	cout << "***** 명철각에 오신 것을 환영합니다 *****\n";

	while (true) {
		cout << "짬뽕: 1, 짜장: 2, 군만두: 3, 종료: 4>>";
		cin >> menu;
		if (menu == 1) {
			cout << "몇인분?\n";
			cin >> num;
			cout << "짬뽕 " << num << "인분 나왔습니다.\n";
		}
		else if (menu == 2) {
			cout << "몇인분?\n";
			cin >> num;
			cout << "짜장 " << num << "인분 나왔습니다.\n";
		}
		else if (menu == 3) {
			cout << "몇인분?\n";
			cin >> num;
			cout << "군만두 " << num << "인분 나왔습니다.\n";
		}
		else if (menu == 4) {
			cout << "종료 하겠습니다.....\n";
			break;
		}
		else {
			cout << "다시 주문하세요 !!\n";
		}
	}
}