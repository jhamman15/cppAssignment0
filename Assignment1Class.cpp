#include <iostream>
#include <math.h>
#include "Assignment1.h"

//calculates the hypotenus of a triangle
double Assignment1Class::hypotenuseOfTriangle(double side1, double side2){
    double preSquareRoot = pow(side1, 2) + pow(side2, 2);
    return pow(preSquareRoot, 0.5); //uses 0.5 exponent to square root
}

//calculates the area of trapezoid
double Assignment1Class::areaOfTrapezoid(double side1, double side2, double height){
    return (side1 + side2)*height/2;
}

//calculates the volume of rectangle
double Assignment1Class::volumeOfRectangle(double length, double width, double height){
    return length * width * height;
}
