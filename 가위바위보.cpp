#include <iostream>
#include <string>
using namespace std;

int main() {
	
	string r;
	string j;

	cout << "가위, 바위, 보 중에 타자를 입력하세요.";
	cin >> r;

	cout << "가위, 바위, 보 중에 타자를 입력하세요.";
	cin >> j;

	if (r == "가위") {
		if (j == "바위") {
			cout << "줄리엣 승";
		}
		else if (j == "보") {
			cout << "로미오 승";
		}
		else {
			cout << "무승부";
		}
	}
	else if (r == "바위") {
		if (j == "가위") {
			cout << "로미오 승";
		}
		else if (j == "보") {
			cout << "줄리엣 승";
		}
		else {
			cout << "무승부";
		}
	}
	else {
		if (j == "바위") {
			cout << "로미오 승";
		}
		else if (j == "가위") {
			cout << "줄리엣 승";
		}
		else {
			cout << "무승부";
		}
	}

}