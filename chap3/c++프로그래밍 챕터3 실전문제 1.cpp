#include <iostream>
using namespace std;

class Tower {
public:
	int height;
	Tower();
	Tower(int a);
	double getHeight();
};

Tower::Tower() {
	height = 1;
}

Tower::Tower(int a) {
	height = a;
}

double Tower::getHeight() {
	return height;
}

int main() {
	Tower myTower;
	Tower seoulTower(100);
	cout << "���̴� " << myTower.getHeight() << "����" << endl;
	cout << "���̴� " << seoulTower.getHeight() << "����" << endl;
}

