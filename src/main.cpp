#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>

#include <vector>

using namespace std;

bool isSubString(string needle, string haystack) {
  return true;
}

TEST_CASE("Prefix", "[classic]")
{
  REQUIRE(isSubString("hay", "haystack"));
}
