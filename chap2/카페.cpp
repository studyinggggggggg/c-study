#include <iostream>
#include <string>

using namespace std;

int main() {
	string menu;
	int num = 0;
	int sum = 0;

	cout << "에스프레소 2000원, 아메리카노 2300원, 카푸치노 2500원입니다.\n";
	while (sum < 20000) {
		cout << "주문>>";
		cin >> menu >> num;

		if (menu == "에스프레소") {
			cout << 2000 * num << "원입니다. 맛있게 드세요.\n";
			sum += 2000 * num;
		}
		else if (menu == "아메리카노") {
			cout << 2300 * num << "원입니다. 맛있게 드세요.\n";
			sum += 2300 * num;
		}
		else if (menu == "카푸치노") {
			cout << 2500 * num << "원입니다. 맛있게 드세요.\n";
			sum += 2500 * num;
		}
		else {
			cout << "잘못된 메뉴 주문입니다.\n";
		}
	}
	cout << "오늘 " << sum << "원을 판매하여 카페를 닫습니다. 내일봐요 ~~~~\n";
}