#include <iostream>
using namespace std;

class Area {
public:
    // Area of Circle
    void area(float r) {
        cout << "Area of Circle = " << 3.14 * r * r << endl;
    }

    // Area of Rectangle
    void area(float l, float b) {
        cout << "Area of Rectangle = " << l * b << endl;
    }

    // Area of Triangle
    void area(float base, float height, int) {
        cout << "Area of Triangle = " << 0.5 * base * height << endl;
    }
};

int main() {
    Area a;
    float r, l, b, base, height;

    cout << "Enter radius of circle: ";
    cin >> r;
    a.area(r);

    cout << "\nEnter length and breadth of rectangle: ";
    cin >> l >> b;
    a.area(l, b);

    cout << "\nEnter base and height of triangle: ";
    cin >> base >> height;
    a.area(base, height, 0);

    return 0;
}