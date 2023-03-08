#include "Date.h"
#include <string>
#include <sstream>
#include <iomanip>

const std::string Date::MONTHS[12] = {"JANUARY", "FEBRUARY", "MARCH", "APRIL", "MAY", "JUNE", "JULY", "AUGUST", "SEPTEMBER", "OCTOBER", "NOVEMBER", "DECEMBER"}; 

void Date::setMonth(int m)
{   month = m;}
int Date::getMonth() const
{   return month;}

void Date::setDay(int d)
{   day = d;}
int Date::getDay() const
{   return day;}

void Date::setYear(int y)
{   year = y;}
int Date::getYear() const
{   return year;}

std::string Date::print()
{
    std::stringstream date;

    date << std::setw(10) << std::left << MONTHS[month-1] << std::setw(3) << std::left << day << std::setw(5) << year;

    return date.str();
}

bool Date::compare(const Date& d1, const Date& d2)
{
    return (d1.getYear() < d2.getYear()) || 
           ((d1.getYear() == d2.getYear()) && (d1.getMonth() < d2.getMonth())) || 
           ((d1.getYear() == d2.getYear()) && (d1.getMonth() == d2.getMonth()) && (d1.getDay() <= d2.getDay()));
}
