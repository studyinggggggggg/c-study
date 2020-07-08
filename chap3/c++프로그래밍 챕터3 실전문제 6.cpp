#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


class Random {
public:
	Random();
	int n;
	int next();
	int nextInrange(int x, int y);
};

Random::Random() {
	srand((unsigned int)time(0));
}

int Random::next() {

	while (true) {
		n = rand();
		if (n % 2 == 0) {
			break;
		}
		else {
			n = rand();
		}
	}
	return n;
}

int Random::nextInrange(int a, int b) {
	while (true) {
		n = rand() % (b - a + 1) + a;
		if (n % 2 == 0) {
			break;
		}
		else {
			n = rand() % (b - a + 1) + a;
		}
	}
	return n;
}

int main() {
	Random r;
	cout << "-- 0에서 " << RAND_MAX << "까지의 랜덤 짝수 정수 10개--" << endl;
	for (int i = 0; i < 10; i++) {
		int a = r.next();
		cout << a << " ";
	}
	cout << endl << endl << "-- 2에서 " << "4 까지의 랜덤 짝수 정수 10개 --" << endl;
	for (int i = 0; i < 10; i++) {
		int a = r.nextInrange(2, 10);
		cout << a << " ";

	}
	cout << endl;
}