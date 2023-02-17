#include <iostream>
using namespace std;

int main() {
    float side1, side2, side3;

    cout << "Enter the lengths of three sides of a triangle: ";
    cin >> side1 >> side2 >> side3;

    if (side1 == side2 && side2 == side3) {
        cout << "The triangle is an Equilateral triangle." << endl;
    }
    else if (side1 == side2 || side1 == side3 || side2 == side3) {
        cout << "The triangle is an Isosceles triangle." << endl;
    }
    else {
        cout << "The triangle is a Scalene triangle." << endl;
    }

    return 0;
}
