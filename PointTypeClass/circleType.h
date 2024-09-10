#pragma once
#ifndef H_circleType
#define H_circleType
#define _USE_MATH_DEFINES
#include "pointType.h"
#include <math.h>
#include <cmath>

template <class T>
class circleType
{
public:

	float getCircumference() 
	{
		float circ = float(M_PI) * (r * 2);
		return circ;
	}

	float getArea()
	{
		float area = float(M_PI) * (r * r);
		return area;
	}

	void print()
	{
		cout << "Radius: " << r << endl << "Circumference: " << getCircumference() << endl << "Area: " << getArea() << endl;
	}

	circleType<T>(pointType<T>& p1, pointType<T>& p2)
	{
		r = p1 - p2;
	}

private:
	float r;
};
#endif