#include <iostream>
#include <string>

using namespace std;

int main() {
	
	string secret = "yes";
	string input_secret = "";
	while (secret != input_secret){
		cout << "���α׷��� �����Ϸ��� yes�� �Է����ּ���.";
		cin >> input_secret;
	}
	cout << "�����մϴ�..";
}