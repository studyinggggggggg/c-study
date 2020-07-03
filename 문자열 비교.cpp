#include <iostream>
#include <string>

using namespace std;

int main() {
	string a;
	string b;
	
	cout << "문자를 입력해주세요. :\t";
	cin >> a >> b;

	if (a == b) {
		cout << "같습니다.";
	}
	else
		cout << "같지않습니다.";

}