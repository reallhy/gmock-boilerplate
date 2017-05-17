#include "gtest/gtest.h"
#include "ShapeCalculator.h"
#include "MockShape.h"

using namespace testing;

TEST(ShapeCalculatorTest, ShouldBeCallAreaMethodTwiceWhenCalculate){
    MockShape mockShape;
    EXPECT_CALL(mockShape, area()).Times(2);
    ShapeCalculator* calculator = new ShapeCalculator(&mockShape, &mockShape);
    calculator->getTotalArea();
}

TEST(ShapeCalculatorTest, ShouldSumAreaOfTwoShapesWhenCalculate){
    MockShape mockShape;
    EXPECT_CALL(mockShape, area()).WillOnce(Return(4)).WillOnce(Return(5));
    ShapeCalculator* calculator = new ShapeCalculator(&mockShape, &mockShape);
    EXPECT_EQ(9, calculator->getTotalArea());
}