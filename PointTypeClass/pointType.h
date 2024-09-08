#pragma once

using namespace std;
#include <iostream>
#include <cmath>

template <class T>
class pointType
{
public:


	void setPoint(T x, T y);

	T getX() { return posX; } //sets the x value
	T getY() { return posY; } //sets the y value


	void print() const;

	//Constructor
	pointType(T x, T y)
	 {
		posX = x;
		posY = y;
	}

	
	//pointType(T x, T y);

	//Overloaded operator
	float operator-(const pointType<T>& p2)
	{
		float distance = sqrt(pow((p2.posX - posX), 2) + pow((p2.posY - posY), 2)); //distance formula
		return distance;
	}

private:
	T posX, posY;


	
};

//prints the values out
template <class T>
void pointType<T>::print() const
{
	cout << "x: " << posX << " , y: " << posY << endl;
}

//sets the posX and posY variables to the point's coordinate values
template <class T>
void pointType<T>::setPoint(T a, T b)
{
	posX = a;
	posY = b;
}



