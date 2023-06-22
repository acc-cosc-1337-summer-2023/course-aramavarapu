#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "repetition.h"

TEST_CASE("Test get_gc_content function", "verification") {
	REQUIRE(get_gc_content("AGCTATAG") == .375);
}

