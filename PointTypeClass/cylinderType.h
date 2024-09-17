#pragma once
#ifndef H_cylinderType
#define H_cylinderType
#define _USE_MATH_DEFINES
#include "pointType.h"
#include "circleType.h"
#include <math.h>
#include <cmath>

template <class T>
class cylinderType
{
public:

	void setHeight(T h)
	{
		height = h;
	}

	float getHeight()
	{
		return height;
	}
	
	float getVolume()
	{
		T r = circle->getRadius();
		T vol = float(M_PI) * (r * r) * height; //runs volume calculations with radius r
		return vol;
	}

	float getArea()
	{
		T r = circle->getRadius();
		T area = (2 * float(M_PI) * r * height) + (2 * float(M_PI) * (r * r)); //runs surface area calculations with radius r
		return area;
	}

	void print()
	{
		T r = circle->getRadius();
		cout << "Cylinder Calculations: " << endl << "Radius: " << r << endl << "Circumference: " << circle->getCircumference() << endl << "Surface Area: " << getArea() << endl
			<< "Volume: " << getVolume() << endl; //print statement
	}

	cylinderType<T>(circleType<T>& c1, T height) //constructor, uses the circle and a height variable to create the cylinder
	{
		setHeight(height);
		circle = &c1;
	}

private:
	float height;
	circleType<T> *circle;
};
#endif