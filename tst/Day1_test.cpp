#include "gtest/gtest.h"
#include "Day1.h"

TEST(ArrayHasTwoIntegersTest, Day1Test) {
    ArrayHasTwoIntegers array_has_two_integers;
    EXPECT_TRUE(array_has_two_integers.sum_two(4, 17, {10,15,3,7}));
    EXPECT_FALSE(array_has_two_integers.sum_two(5, 3, {1,3,5,7,9}));
}