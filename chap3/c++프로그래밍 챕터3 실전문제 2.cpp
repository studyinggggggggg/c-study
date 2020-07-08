#include <iostream>
#include <string>
using namespace std;

class Date {
public:
	int year;
	int month;
	int day;
	string idd;
	Date(string d);
	Date(int y, int m, int d);
	int getYear();
	int getMonth();
	int getDay();
	void show();
};

Date::Date(int y, int m, int d) {
	year = y;
	month = m;
	day = d;
}

Date::Date(string d) {
	idd = d;
}

void Date::show() {
	cout << idd.substr(0, 3) << "³â " << idd.substr(5,5) << " ¿ù" << idd.substr(7, 8) << "ÀÏ" << endl;
}

int Date::getYear() {
	return year;
}

int Date::getMonth() {
	return month;
}

int Date::getDay() {
	return day;
}

int main() {
	Date birth(2014, 3, 20);
	Date independenceDay("1945/8/15");
	independenceDay.show();
	cout << birth.getYear() << "," << birth.getMonth() << "," << birth.getDay() << endl;
}

