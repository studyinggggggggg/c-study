#include <iostream>
#include <string>
using namespace std;


int main() {
	char input[100];
	string op;
	int a, b, result;

	cout << "?";
	for (int i = 0; i < 3; i++) {
		cin.getline(input, 100, ' ');

		if (i == 0) {
			a = atoi(input);
		}
		else if (i == 1) {
			op = input;
		}
		else {
			b = atoi(input);
		}
	}

	if (op == "+") {
		result = a + b;
	}
	else if (op == "-") {
		result = a - b;
	}
	else if (op == "*") {
		result = a * b;
	}
	else if (op == "/") {
		result = a / b;
	}

	cout << result;

}