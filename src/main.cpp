#define CATCH_CONFIG_MAIN

#include <catch2/catch.hpp>
TEST_CASE("Test with zero", "[classic]")
{
   REQUIRE(42 == 42);
}
