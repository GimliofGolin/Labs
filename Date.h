#ifndef DATE_H_
#define DATE_H_
#include <string>

class Date
{
private:
  int month, day, year;

public:
  static std::string const MONTHS[12];

  int getMonth() const;
  void setMonth(int m);

  int getDay() const;
  void setDay(int d);

  int getYear() const;
  void setYear(int y);

  string print();
  static bool compare(Date d1, Date d2) const;
};
#endif
