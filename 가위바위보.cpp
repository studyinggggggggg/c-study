#include <iostream>
#include <string>
using namespace std;

int main() {
	
	string r;
	string j;

	cout << "����, ����, �� �߿� Ÿ�ڸ� �Է��ϼ���.";
	cin >> r;

	cout << "����, ����, �� �߿� Ÿ�ڸ� �Է��ϼ���.";
	cin >> j;

	if (r == "����") {
		if (j == "����") {
			cout << "�ٸ��� ��";
		}
		else if (j == "��") {
			cout << "�ι̿� ��";
		}
		else {
			cout << "���º�";
		}
	}
	else if (r == "����") {
		if (j == "����") {
			cout << "�ι̿� ��";
		}
		else if (j == "��") {
			cout << "�ٸ��� ��";
		}
		else {
			cout << "���º�";
		}
	}
	else {
		if (j == "����") {
			cout << "�ι̿� ��";
		}
		else if (j == "����") {
			cout << "�ٸ��� ��";
		}
		else {
			cout << "���º�";
		}
	}

}