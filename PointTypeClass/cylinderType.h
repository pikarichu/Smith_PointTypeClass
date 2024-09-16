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
	
	float getVolume()
	{
		T vol = 10;//float(M_PI) * (r * 2); //runs circumference calculations with radius r
		return vol;
	}

	float getArea()
	{
		T area = 5;//float(M_PI) * (r * r); //runs area calculations with radius r
		return area;
	}

	void print()
	{
		T r = circle->getRadius();
		cout << "Radius: " << r << endl << "Circumference: " << circle->getCircumference() << endl << "Area: " << getArea() << endl; //print statement
	}

	cylinderType<T>(circleType<T>& c1, T height)
	{
		setHeight(height);
		circle = &c1;
	}

private:
	float height;
	circleType<T> *circle;
};
#endif