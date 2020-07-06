#include <iostream>

using namespace std;

class Rectangle {
public:
	int width;
	int height;

	Rectangle();
	Rectangle(int a);
	Rectangle(int a, int b);

	bool isSquare();
};

Rectangle::Rectangle() { height = 1; width = 1; }
Rectangle::Rectangle(int a, int b) : width(a), height(b) {}
Rectangle::Rectangle(int a) : width(a), height(a) {}

bool Rectangle::isSquare() {
	if (height == width) {
		return true;
	}
	else {
		return false;
	}
}

int main() {
	Rectangle rect1;
	Rectangle rect2(3,5);
	Rectangle rect3(3);

	if (rect1.isSquare()) {
		cout << "정사각형입니다.";
	}
	if (rect2.isSquare()) {
		cout << "졍사각형입니다.";
	}
	if (rect3.isSquare()) {
		cout << "정사각형입니다.";
	}
}

