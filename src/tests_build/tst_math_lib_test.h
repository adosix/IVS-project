#include <gtest/gtest.h>
#include <gmock/gmock-matchers.h>
#include <limits.h>
#include "math_lib.cpp"

using namespace testing;

TEST(math_lib_test, Arithmetic)
{
    EXPECT_EQ(1, 1);
    ASSERT_THAT(0, Eq(0));
}
