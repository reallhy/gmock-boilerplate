#ifndef GMOCK_BOILERPLATE_SQUARE_H
#define GMOCK_BOILERPLATE_SQUARE_H

#include "Shape.h"

class Square: public Shape {
private:
	int width;
public:
	Square(int _width) :
		width(_width)
	{
	}
	virtual int area()
	{
		return width * width;
	}
};
#endif