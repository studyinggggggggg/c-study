#include <iostream>

using namespace std;

int main() {
	for (int n = 1; n <= 100; n++) {
		if (n % 10 == 0) {
			cout << n << '\n';
		}
		else
			cout << n << '\t';
	}
}