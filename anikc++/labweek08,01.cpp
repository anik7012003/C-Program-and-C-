#include<iostream>
using namespace std;

class Compleex {
private:
    double real;
    double imaginary;

public:
    void setNumber(double real, double imaginary)
    {
        this->real = real;
        this->imaginary = imaginary;
    }

    friend Compleex sumComplex(Compleex o1, Compleex o2);

    void printNumber()
    {
        cout << "Your number: " << real << "+" << imaginary << "i" << endl;
    }
};

Compleex sumComplex(Compleex o1, Compleex o2) {
    Compleex o3;
    o3.setNumber(o1.real + o2.real, o1.imaginary + o2.imaginary);
    return o3;
}

int main() {
    Compleex c1, c2;
    c1.setNumber(1, 4);
    c1.printNumber();
    c2.setNumber(5, 8);
    c2.printNumber();

    Compleex sum = sumComplex(c1, c2);
    sum.printNumber();

    return 0;
}

