#include "gtest/gtest.h"

#include "Square.h"

using namespace testing;

TEST(SquareTest, ShouldGetAreaOfSquare) {
	Shape* shape = new Square(3);
	EXPECT_EQ(3*3, shape->area());
}

