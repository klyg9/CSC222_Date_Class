//
// Created by Kely Gbedemah on 10/19/26.
//

#ifndef CSC222_DATE_CLASS_DATE_H
#define CSC222_DATE_CLASS_DATE_H
#include <string>

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
class Date {
    private:
    int month;
    int day;
    int year;
    public:
    /*
 * Constructor
 * Purpose: Creates a Date object.
 * Inputs: Month, day, and year.
 * Precondition: None.
 * Postcondition: Stores a valid date or resets
 * to January 1, 1900 if the input is invalid.
 */
    Date(int m = 1, int d = 1, int y = 1900);

    /*
 * Purpose: Changes the stored date.
 * Inputs: Month, day, and year.
 * Precondition: None.
 * Postcondition: Stores the requested date if valid;
 * otherwise resets to January 1, 1900.
 */
    void setDate(int m, int d, int y);


    // Accessors: Return the stored month, day, or year.
    // Precondition: None. The Date object is unchanged.
    int getMonth() const;
    int getDay() const;
    int getYear() const;

    // Return true if the object's year or supplied year is a leap year.
    // Precondition: None. The Date object is unchanged.
    bool isLeapYear() const;
    bool isLeapYear(int year) const;
    int daysInMonth(int m, int y) const;

    // Return the number of days in the specified month and year.
    // Precondition: Month is 1-12 and year is positive for lastDay.
    // The Date object is unchanged.

    int lastDay () const;
    int lastDay (int month, int year) const;

    // Return the date as a string in numeric, month-first,
    // or day-first format. The Date object is unchanged.
    std :: string toNumericString() const;
    std :: string toMonthFirstString() const;
    std :: string toDayFirstString() const;
};


#endif //CSC222_DATE_CLASS_DATE_H