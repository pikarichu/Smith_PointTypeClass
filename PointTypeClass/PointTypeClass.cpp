
#include <iostream>
#include "pointType.h"
#include "circleType.h"
#include "cylinderType.h"

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
    cout << "Enter cylinder height: ";
    inputX = inputCoord();
    circleType<float> c1(p1, p2);

    c1.getCircumference();
    c1.getArea();
    c1.print(); //runs the circumference and area calculations, then prints out the results for radius, circumference and area

    cylinderType<float> cyl1(c1, inputX); //creates the cylinder and then runs the volume and surface area calculations
    cyl1.print(); //prints out the results for the cylinder

}

 