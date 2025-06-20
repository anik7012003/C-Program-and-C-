#include <iostream>

class Date {
private:
    int year;
    int month;
    int day;

public:
    Date(int year, int month, int day) {
        this->year = year;
        this->month = month;
        this->day = day;
    }

    friend bool isLeapYear(const Date& date);
};

bool isLeapYear(const Date& date) {
    int year = date.year;

    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                return true;
            } else {
                return false;
            }
        } else {
            return true;
        }
    } else {
        return false;
    }
}

int main() {
    int year;

    std::cout << "Enter the year: ";
    std::cin >> year;

    Date date(year, 2, 29);

    if (isLeapYear(date)) {
        std::cout << "It's a leap year." << std::endl;
    } else {
        std::cout << "It's not a leap year." << std::endl;
    }

    return 0;
}
