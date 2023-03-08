#ifndef DATE_H
#define DATE_H
#include <string>

class Date
{
private:
    int month {1};
    int day {1};
    int year {1900};

public:
    Date() = default;
    Date(int m, int d, int y) : month(m), day(d), year(y) {}

    static std::string const MONTHS[12];

    int getMonth() const;
    void setMonth(int m);

    int getDay() const;
    void setDay(int d);

    int getYear() const;
    void setYear(int y);

    std::string print();
    static bool compare(const Date& d1, const Date& d2);
};
#endif
