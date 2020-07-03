#include <iostream>
#include <string>

using namespace std;

int main() {
	int c = 0;
	string save = "";
	char name[100];
	for (int i = 0; i < 5; i++) {
		cin.getline(name, 100, ';');
		string a = name;
		int b = a.size();
		cout << i <<" : "<< name << endl;
		
		if (b > c) {
			c = b;
			save = name;
		}
	}
	cout << "가장 긴 이름은\t" << save ;
}