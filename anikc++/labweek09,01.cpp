#include <iostream>

using namespace std;

class Triangle {
protected:
    double base;
    double height;

public:
    Triangle(double base_val, double height_val) : base(base_val), height(height_val) {}

    friend class AreaPrinter;
};

class Circle {
protected:
    double radius;

public:
    Circle(double radius_val) : radius(radius_val) {}

    friend class AreaPrinter;
};

class AreaPrinter {
public:
    void printTriangleArea(const Triangle& triangle) {
        double area = 0.5 * triangle.base * triangle.height;
        cout << "Triangle Area: " << area << endl;
    }

    void printCircleArea(const Circle& circle) {
        double area = 3.14159 * circle.radius * circle.radius;
        cout << "Circle Area: " << area << endl;
    }
};

int main() {
    Triangle triangle(57.0, 63.0);
    Circle circle(40.0);

    AreaPrinter areaPrinter;
    areaPrinter.printTriangleArea(triangle);
    areaPrinter.printCircleArea(circle);

    return 0;
}
