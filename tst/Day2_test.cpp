#include "gtest/gtest.h"
#include "Day2.h"

TEST(MultiplicationArrayTest, Day2Test){
    MultiplicationArray mult_obj;
    std::vector<int> actual_output;
    actual_output = mult_obj.multiplication_array({1,2,3,4,5});
    EXPECT_EQ(actual_output.at(0), 120);
    EXPECT_EQ(actual_output.at(1), 60);
    EXPECT_EQ(actual_output.at(2), 40);
    EXPECT_EQ(actual_output.at(3), 30);
    EXPECT_EQ(actual_output.at(4), 24);

    actual_output = mult_obj.multiplication_array({1,2,3});
    EXPECT_EQ(actual_output.at(0), 6);
    EXPECT_EQ(actual_output.at(1), 3);
    EXPECT_EQ(actual_output.at(2), 2);
}