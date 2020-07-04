#include <iostream>
#include <string>

using namespace std;


int main() {
	string input_string;
	
	cout << "문자열 입력>>";

	cin >> input_string;

	for (int i = 0; i < input_string.size(); i++) {
		cout << input_string.substr(0, i + 1) << endl;
	}
}