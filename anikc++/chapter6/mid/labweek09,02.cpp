#include <iostream>

using namespace std;

class Vector {
private:
    double m;
    double n;
    double o;

public:
    Vector(double x,double y,double z) {
        m=x;
        n=y;
        o=z;
    }

    // Friend function  calculate for  the dot product
    friend double dotProduct(const Vector& v1, const Vector& v2);
};

double dotProduct(const Vector& v1, const Vector& v2) {
    double anik = v1.m * v2.m + v1.n * v2.n + v1.o * v2.o;
    return anik;
}

int main() {
    Vector v1(10.0, 23.0, 13.0);
    Vector v2(4.0, 5.0, 6.0);

    double result = dotProduct(v1, v2);

    cout << "Dot Product: " << result << endl;

    return 0;
}
