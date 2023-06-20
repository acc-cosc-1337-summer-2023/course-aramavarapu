#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "repetition.cpp"

TEST_CASE("Test get_gc_content function", "verification") {
	REQUIRE(Test get_gc_content function("AGCTATAG") == .375);
}

