#include "Date.h"
#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>

using namespace std;

string Date::print() {
	stringstream ss;
	ss << left << setw(10) << month;
	ss << setw(3) << day;
	ss << setw(5) << year;

	cout << ss.str();
}

