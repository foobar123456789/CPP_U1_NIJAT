
#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "../a1/catch.hpp"

#include "../a4/get_prize.hpp"

TEST_CASE("Signature")
 {
 unsigned int top_prize = 32000;
 Queue q;
 std::string name = "Alice";
 unsigned int ret = get_prize(32000, q, "Bob");
 }
