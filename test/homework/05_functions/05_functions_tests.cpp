#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "func.h"

TEST_CASE("Return the largest value in a vector(list) of function get_vector_max_value", "verification") {
	REQUIRE(get_vector_max_value({5, 7, -1, 99, -100, 10}) == 99);
	REQUIRE(get_vector_max_value({-50, 0, -51, 50, -99, -100}) == 50);
}
TEST_CASE("Calculate the square of each vector element of function get_square_of_each_element","verification") {
	REQUIRE(get_square_of_each_element({3,7,2,5,10}) == std::vector<int>{9,49,4,25,100});
	REQUIRE(get_square_of_each_element({6,1,8,9,4}) == std::vector<int>{36,1,64,81,16});
}

