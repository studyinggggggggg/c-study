#include <iostream>

using namespace std;

class Account {
	string name;
	int money, id;
public:

	Account(string n, int i ,int m);
	
	void deposit(int a);
	string getOwner();
	int withdraw(int r);
	int inquiry();
};

Account::Account(string n, int i, int m) {
	name = n;
	id = i;
	money = m;
}

string Account::getOwner() {
	return name;
}

int Account::withdraw(int r) {
	money -= r;
	return money;
}

int Account::inquiry() {
	return money;
}

void Account::deposit(int a) {
	money += a;
}

int main() {
	Account a("kitae", 1, 5000);
	a.deposit(50000);
	cout << a.getOwner() << "ÀÇ ÀÜ¾×Àº " << a.inquiry() << endl;
	int money = a.withdraw(20000);
	cout << a.getOwner() << "ÀÇ ÀÜ¾×Àº " << a.inquiry() << endl;
}