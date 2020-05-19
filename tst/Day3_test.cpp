#include "gtest/gtest.h"
#include "Day3.h"

TEST(LeastPositiveTest, Day3Test){
    LeastPositiveInteger least;
    int actual_output;
    actual_output = least.least_positive({3, 4, 1, -1});
    EXPECT_EQ(actual_output, 2);

    actual_output = least.least_positive({1, 2, 0});
    EXPECT_EQ(actual_output, 3);
}