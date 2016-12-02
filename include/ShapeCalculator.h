#ifndef GMOCK_BOILERPLATE_SHAPECALCULATOR_H_H
#define GMOCK_BOILERPLATE_SHAPECALCULATOR_H_H

#include "Shape.h"

class ShapeCalculator {
private:
	Shape* shape1;
	Shape* shape2;
public:
	ShapeCalculator(Shape* _shape1, Shape* _shape2) :
		shape1(_shape1), shape2(_shape2)
	{
	}
	~ShapeCalculator()
	{
	}

	int getTotalArea()
	{
		return shape1->area() + shape2->area();
	}
};
#endif
