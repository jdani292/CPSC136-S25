#ifndef H_rectangleType
#define H_rectangleType
  
#include <iostream> 
using namespace std;

class rectangleType
{
    //overload the << and >> operators

public:
    void setDimension(double l, double w);
    double getLength() const;
    double getWidth() const;
    double area() const;
    double perimeter() const;

    //Overload the arithmetic operators +, -, *
    //perform operations on length and width separately
    

    //Overload the relational operators ==, !=, <=, <, >=, >
    //compare the areas of two rectangles and return boolean 
    

    //Overload the increment and decrement operators


    //constructors
    rectangleType();
    rectangleType(double l, double w);

protected:
    double length;
    double width;
};

#endif
