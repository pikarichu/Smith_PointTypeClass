#pragma once
#ifndef H_circleType
#define H_circleType
#define _USE_MATH_DEFINES
#include "pointType.h"
#include <math.h>
#include <cmath>

template <class T>
class circleType//: public pointType<T>
{
public:

	float getCircumference() 
	{
		float circ = float(M_PI) * (r * 2);
		cout << "Circumference of a circle drawn with the two points: " << circ << endl;
		return circ;
	}

	float getArea()
	{
		float area = float(M_PI) * (r * r);
		cout << "Area of a circle drawn with the two points: " << area << endl;
		return area;
	}

	//void getArea(float radius);

	circleType<T>(pointType<T>& p1, pointType<T>& p2)// : pointType<T>(&p1, &p2)
	{
		r = p1 - p2;
	}

private:
	float r;
	//pointType<T> &p1;
	//pointType<T> &p2;
	//pointType<T> point1, point2;
};

//template <class T>
/*float circleType::getCircumference()
{
	float circ = float(M_PI) * (r * 2);	
	//float circ = float(r * 2);

	cout << circ << endl;
	return circ;
}*/
/*template <class T>
circleType<T>::circleType(pointType<T>& p1, pointType<T>& p2) : pointType<T>(p1, p2) 
{
	r = p1 - p2;
};*/
/*circleType::circleType(float x1, float y1, float x2, float y2)
{
	//point1 = p1;
	//point2 = p2;
	r = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

}*/

#endif