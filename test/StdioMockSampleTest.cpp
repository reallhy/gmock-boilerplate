#include <gtest/gtest.h>
#include "StdioMockSample.h"
#include "MockStdio.h"

using namespace testing;

TEST(StdioMockSampleTest, ShouldCallFopenWhenFooIsCalled){
    MockStdio mockStdio;
    EXPECT_CALL(mockStdio, fopen("test_file.txt", "r")).Times(1);
    foo("test_file.txt", "r");
}