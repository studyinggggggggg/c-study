#include <iostream>
using namespace std;

class Circle {
public:
	int radius;
	Circle();
	Circle(int r);
	~Circle();
	double getArea();
};

Circle::Circle() {
	radius = 1;
	cout << radius;
}

Circle::Circle(int r) {
	radius = r;
	cout << radius;
}

Circle::~Circle() {
	cout << "¼Ò¸ê~";
}

double Circle::getArea() {
	return radius * radius * 3.14;
}

int main() {
	Circle donut;
	cout << donut.getArea();
	Circle pizza(30);
	cout << pizza.getArea();
}