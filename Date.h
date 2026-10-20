//
// Created by Kely Gbedemah on 10/19/26.
//

#ifndef CSC222_DATE_CLASS_DATE_H
#define CSC222_DATE_CLASS_DATE_H
#include <string>

class Date {
    private:
    int month;
    int day;
    int year;
    public:
    Date(int m = 1, int d = 1, int y = 1900);
    void setDate(int m, int d, int y);
    int getMonth() const;
    int getDay() const;
    int getYear() const;
    bool isLeapYear() const;
    bool isLeapYear(int year) const;
    int daysInMonth(int m, int y) const;
    int lastDay () const;
    int lastDay (int month, int year) const;

    std :: string toNumericString() const;
    std :: string toMonthFirstString() const;
    std :: string toDayFirstString() const;
};
/*
 *Date class
 *Stores a valid calendar date.
 *
 *Class invariant :
 *Month must be between 1 and 12.
 *Year must be 1 or greater.
 *Day must be valid for the month and year.
 *Invalid dates reset to January 1, 1900.
 */

#endif //CSC222_DATE_CLASS_DATE_H