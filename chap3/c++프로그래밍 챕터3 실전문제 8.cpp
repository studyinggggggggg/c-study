#include <iostream>
#include <string>
using namespace std;

class Integer {
	int num;
public:

	Integer(int a);
	Integer(string a);
	int get();
	int isEven();
	void set(int n);
};

Integer::Integer(int a) {
	num = a;
}

Integer::Integer(string a) {
	num = stoi(a);
}

void Integer::set(int n) {
	num = n;
}

int Integer::get() {
	return num;
}

int Integer::isEven() {
	if (num % 2 == 0) {
		return 1;
	}
	else {
		return 0;
	}
}

int main() {
	Integer n(30);
	cout << n.get() << " ";
	n.set(50);
	cout << n.get() << " ";

	Integer m("300");
	cout << m.get() << " ";
	cout << m.isEven();
}
