//
// Created by Kely Gbedemah on 10/19/26.
//
 #include "Date.h"
#include <string>

int Date::getMonth() const {
 return month;
}
int Date::getDay() const {
 return day;
}
int Date::getYear() const {
 return year;
}
Date::Date(int month, int day, int year) {
 setDate(month, day, year);
}

bool Date::isLeapYear(int year) const {
 return (year % 400 == 0) ||
  (year % 4 == 0 && year % 100 != 0);
}
bool Date::isLeapYear() const {
 return isLeapYear(getYear());
}

int Date::daysInMonth(int m, int y) const {
 if (m==2) {
  return isLeapYear(y) ? 29 : 28;
 }
 if (m==4 || m==6 || m==9 || m==11) {
  return 30;
 }
 if (m >=1 && m <= 12) {
  return 31;
 }
 return 0;
}
void Date::setDate(int m, int d, int y) {
 if (y >= 1 && m >=1 && m <= 12 && d>=1 && d<= daysInMonth(m,y)) {
  month = m;
  day = d;
  year = y;
 } else {
  month = 1;
  day = 1;
  year = 1900;
 }
}
 int Date::lastDay() const {
  return daysInMonth(month, year);
 }
 int Date::lastDay(int month,int year) const {
  return daysInMonth(month, year);
 }
std::string Date::toNumericString() const {
 return std::to_string(month)+ "/"+
  std::to_string(day)+ "/"+
   std::to_string(year);
}
std::string Date::toMonthFirstString() const {
 const std::string months[] = {
  "", "January", "February", "March", "April",
  "May", "June", "July", "August",
  "September", "October", "November", "December"
};

 return months[month] + " " +
        std::to_string(day) + ", " +
        std::to_string(year);
}
std::string Date::toDayFirstString() const {
 const std::string months[] = {
  "", "January", "February", "March", "April",
  "May", "June", "July", "August",
  "September", "October", "November", "December"
};

 return std::to_string(day) + " " +
        months[month] + " " +
        std::to_string(year);
}