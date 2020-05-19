#include "gtest/gtest.h"
#include "Day5.h"

TEST(LargestSum, Day5Test){
    LargestSum large;
    int actual_output;
    actual_output = large.largest_sum_non_adjacent({2, 4, 6, 2, 5});
    EXPECT_EQ(actual_output, 13);

    actual_output = large.largest_sum_non_adjacent({5, 1, 1, 5});
    EXPECT_EQ(actual_output, 10);

}