// My Name: Jonathan Maenche
// My Class: CPSC 1021 Section 2 Group 4
// Date: 3/8/2023
// Desc: Program that scans in a series of dates and then prints them in ascending order
// Time: 50m (in lab) + 50m (in lab)

#include <iostream>
#include <iomanip>
#include <fstream>
#include <vector>
#include <algorithm>
#include "Date.h"

using namespace std; 

int main(int argc, char const * argv[]) {
	int numDates; 
	int month, day, year; 
	
	ifstream datesFile; 
	datesFile.open(argv[1]); 

	//Reading in the first line of the file to find number of dates
	datesFile >> numDates; 

	//Creating vector of Date objects
	vector<Date> dates (numDates); 
	
	for (int i = 0; i < numDates; i++) {
		Date sampleDate; 

		//Reading in each value and then assigning it to the 'dates' vector
		datesFile >> month; 
		sampleDate.setMonth(month); 
		datesFile >> day;
		sampleDate.setDay(day); 
		datesFile >> year; 
		sampleDate.setYear(year); 
		
		dates[i] = sampleDate; 
	}
	//Algorithm that sorts the 'dates' vector using the 'compare' function
	sort(&dates[0], &dates[numDates], Date::compare); 
	
	//Print out the dates in order
	for (int i = 0; i < numDates; i++) {
		cout << dates[i].print() << endl; 
	}

	return 0; 
}
