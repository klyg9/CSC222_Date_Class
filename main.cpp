#include <iostream>
#include <iostream>
#include "Date.h"

#include <iostream>
#include "Date.h"


int main() {
    Date invalid(2, 30, 2025);
    Date leap(2, 29, 2024);
    Date normal(2, 28, 2025);
    Date defaultDate;

    std::cout << "Invalid: " << invalid.toNumericString() << std::endl;
    std::cout << "Leap: " << leap.toNumericString() << std::endl;
    std::cout << "Leap year: " << leap.isLeapYear() << std::endl;
    std::cout << "February 2024: " << leap.lastDay() << std::endl;
    std::cout << "Normal February: " << normal.lastDay() << std::endl;
    std::cout << "Default: " << defaultDate.toNumericString() << std::endl;

    Date test(4, 15, 2025);
    test.setDate(4, 31, 2025);

    std::cout << "Invalid April: "
              << test.toNumericString() << std::endl;

    test.setDate(12, 31, 2026);

    std::cout << "Updated date: "
              << test.toNumericString() << std::endl;

    std::cout << "February 2000: "
              << test.lastDay(2, 2000) << std::endl;

    std::cout << "February 1900: "
              << test.lastDay(2, 1900) << std::endl;
    return 0;
}
