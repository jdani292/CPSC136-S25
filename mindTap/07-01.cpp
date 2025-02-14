#include <iostream>

using namespace std;

enum triangleType {scalene, isosceles, equilateral, noTriangle};

triangleType triangleShape(double, double, double);

int main() {
    // Write your main here
    double side1, side2, side3;
    cout << "Enter three sides: ";
    cin >> side1 >> side2 >> side3;

    triangleType t;
    t = triangleShape(side1, side2, side3);

    if (t == equilateral)
        cout << "the shape of the triangle is equilateral\n";


    return 0;
}

triangleType triangleShape(double a , double b, double c)
{   
    if (a == b && b == c)
        return equilateral;
       

}
