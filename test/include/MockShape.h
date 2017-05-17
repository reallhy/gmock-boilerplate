#ifndef GMOCK_BOILERPLATE_MOCKSHAPE_H
#define GMOCK_BOILERPLATE_MOCKSHAPE_H

#include "gmock/gmock.h"
#include "Shape.h"

class MockShape: public Shape {
public:
	MOCK_METHOD0(area, int());
};

#endif
