
#include <iostream>
#include "pointType.h"
#include "circleType.h"

float inputCoord()
{
    float coord;
    cin >> coord;
    return coord;
}

int main()
{
    pointType<float> p1(0, 0); //creates point 1 and sets it to 0,0
    pointType<float> p2(0, 0); //creates point 2 and sets it to 0,0
    float inputX;
    float inputY;
    //float inputX2;
    //float inputY2;
    cout << "Enter point 1 x-coordinate: "; //input x value for the first point
    inputX = inputCoord();
    cout << "Enter point 1 y-coordinate: "; //input y value for the first point
    inputY = inputCoord();
    p1.setPoint(inputX, inputY); //sets point 1's location to the two point values
    cout << "Enter point 2 x-coordinate: "; //input x value for the second point
    inputX = inputCoord();
    cout << "Enter point 2 y-coordinate: "; //input y value for the second point
    inputY = inputCoord();
    p2.setPoint(inputX, inputY); //sets point 2's location to the two point values
    cout << "Point 1: ";
    p1.print();
    cout << "Point 2: ";
    p2.print();
    float d = p1 - p2; //calculates the distance using the overloaded operator
    cout << "The distance between point 1 and point 2: " << d << endl;

    circleType<float> c1(p1, p2);

    //c1.getCircumference();
    //c1.getArea();
    c1.print();
}

 