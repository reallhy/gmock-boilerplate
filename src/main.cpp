#include "ShapeCalculator.h"
#include <iostream>
#include <Square.h>

using namespace std;

int main(){
    ShapeCalculator* shapeCalculator = new ShapeCalculator(new Square(5), new Square(3));
    cout << shapeCalculator->getTotalArea() << endl;
	return 0;
}
