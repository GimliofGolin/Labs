// My Name: Jonathan Maenche
// My Class: CPSC 1021 Section 2 Group 4
// Date: 3/3/2023
// Desc: Program that scans in a series of dates and then prints them in ascending order
// Time: 50m (in lab)

#include <iostream>
#include <iomanip>
#include <fstream>
#include <vector>
#include <algorithm>
#include "Date.h"

using namespace std; 

//Must define the static member variables at the start of the main.cpp file
//const std::string Date::MONTHS[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"}; 

int main(int argc, char const * argv[]) {
	int numDates; 
	string numEntries; 
	int month, day, year; 
	
	ifstream datesFile; 
	datesFile.open(argv[1]); 

	//getline(datesFile, numEntries); 
	datesFile >> numDates; 
	//cout << numEntries << endl; 
	//numDates = stoi(numEntries); 

	vector<Date> dates (numDates); 
	
	for (int i = 0; i < numDates; i++) {
		Date sampleDate; 

		datesFile >> month; 
		sampleDate.setMonth(month); 
		datesFile >> day;
		sampleDate.setDay(day); 
		datesFile >> year; 
		sampleDate.setYear(year); 
		
		dates[i] = sampleDate; 
	}
	sort(&dates[0], &dates[numDates], Date::compare); 
	
	for (int i = 0; i < numDates; i++) {
		cout << dates[i].print() << endl; 
	}

	return 0; 
}
