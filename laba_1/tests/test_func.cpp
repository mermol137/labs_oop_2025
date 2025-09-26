#include <gtest/gtest.h>
#include "func.h"

TEST(FuncTest, ReturnsExpectedString) {
    std::string input = "76hhahh65";
    std::string expected = "76 65";
    EXPECT_EQ(func(input), expected);
}

TEST(FuncTest, EmptyString) {
    std::string input = "";
    std::string expected = "";
    EXPECT_EQ(func(input), expected);
}

TEST(FuncTest, NoDigits) {
    std::string input = "abc def!";
    std::string expected = "";
    EXPECT_EQ(func(input), expected);
}

TEST(FuncTest, DigitsWithSpaces) {
    std::string input = "12 34 56";
    std::string expected = "12 34 56";
    EXPECT_EQ(func(input), expected);
}

TEST(FuncTest, ConsecutiveDigits) {
    std::string input = "a123b45c6";
    std::string expected = "123 45 6";
    EXPECT_EQ(func(input), expected);
}

TEST(FuncTest, DigitsOnly) {
    std::string input = "9876543210";
    std::string expected = "9876543210";
    EXPECT_EQ(func(input), expected);
}
