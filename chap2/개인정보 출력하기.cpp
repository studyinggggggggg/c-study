#include <iostream>
#include <string>

using namespace std;

int main() {
	string name;
	string address;
	string age;

	cout << "이름은 ?\t";
	cin >> name;

	cout << "주소는 ?\t";
	cin >> address;

	cout << "나이는 ?\t";
	cin >> age;

	cout << name << "\t"<< address << "\t" << age << "\t";

}
