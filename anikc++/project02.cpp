#include <iostream>
using namespace std;

class Date {
    int date, month, year;

public:
    void input() {
        cout << "\nEnter All Values in Numerical Format.\nDate: ";
        cin >> date;
        cout << "Month: ";
        cin >> month;
        cout << "Year: ";
        cin >> year;
    }

    friend bool isLeapYear(Date A);
};

bool isLeapYear(Date A) {
    if (A.year % 4 == 0) {
        return true;
    } else {
        return false;
    }
}

int main() {
    Date d;
    d.input();
    if (isLeapYear(d) == true) {
        cout << "Leap Year.";
    } else {
        cout << "Not a Leap Year.";
    }
    return 0;
}

