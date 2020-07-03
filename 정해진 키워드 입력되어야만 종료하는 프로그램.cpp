#include <iostream>
#include <string>

using namespace std;

int main() {
	
	string secret = "yes";
	string input_secret = "";
	while (secret != input_secret){
		cout << "프로그램을 종료하려면 yes를 입력해주세요.";
		cin >> input_secret;
	}
	cout << "종료합니다..";
}