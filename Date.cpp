#include "Date.h"
#include <string>
#include <sstream>
#include <iomanip>

void Date::setMonth(int m)
{   month = m;}
const int Date::getMonth()
{   return month;}

void Date::setDay(int d)
{   day = d;}
const int Date::getDay()
{   return day;}

void Date::setYear(int y)
{   year = y;}
const int Date::getYear()
{   return year;}

std::string Date::print()
{
    std::stringstream date;

    date << setw(10) << left << MONTHS[month-1] << setw(3) << left << day << setw(5) << year;

    return date.str();
}

bool Date::compare(const Date d1, const Date d2)
{
    bool isEarlier;
    if(d1.getYear() < d2.getYear())
        isEarlier = true;
    else if(d1.getYear() > d2.getYear())
        isEarlier = false;
    else{
        if(d1.getMonth() < d2.getMonth())
            isEarlier = true;
        else if(d1.getMonth() > d2.getMonth())
            isEarlier = false;
        else{
            if(d1.getDay() < d2.getDay())
                isEarlier = true;
            else if(d1.getDay() > d2.getDay())
                isEarlier = false;
        }
    }
    return isEarlier;
}