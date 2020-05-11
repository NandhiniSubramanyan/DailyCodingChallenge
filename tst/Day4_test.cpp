#include "gtest/gtest.h"
#include "Day4.h"

TEST(DecodeMessage, Day4Test){
    DecodeMessage decode;
    int actual_output;
    actual_output = decode.decode_number("111");
    EXPECT_EQ(actual_output, 3);

    actual_output = decode.decode_number("2345");
    EXPECT_EQ(actual_output, 2);

    actual_output = decode.decode_number("101");
    EXPECT_EQ(actual_output, 1);
}