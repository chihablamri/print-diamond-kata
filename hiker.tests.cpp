// For more on how to use the excellent Catch test framework see
// https://github.com/catchorg/Catch2

#include "hiker.hpp"
#include <catch2/catch.hpp>

TEST_CASE("print_diamond for 'A'")
{
    std::string expected = "A";
    REQUIRE(print_diamond('A') == expected);
}

TEST_CASE("print_diamond for 'C'")
{
    std::string expected = 
        "  A  \n"
        " B B \n"
        "C   C\n"
        " B B \n"
        "  A  ";
    REQUIRE(print_diamond('C') == expected);
}

TEST_CASE("print_diamond for 'E'")
{
    std::string expected = 
        "    A    \n"
        "   B B   \n"
        "  C   C  \n"
        " D     D \n"
        "E       E\n"
        " D     D \n"
        "  C   C  \n"
        "   B B   \n"
        "    A    ";
    REQUIRE(print_diamond('E') == expected);
}

TEST_CASE("print_diamond for 'B'")
{
    std::string expected = 
        " A \n"
        "B B\n"
        " A ";
    REQUIRE(print_diamond('B') == expected);
}

TEST_CASE("print_diamond for invalid input")
{
    REQUIRE(print_diamond('a') == "");
    REQUIRE(print_diamond('1') == "");
    REQUIRE(print_diamond('@') == "");
}
