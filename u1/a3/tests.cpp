#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "../a1/catch.hpp"

#include "../a3/Queue.hpp"


TEST_CASE("Creation of Queue")
 {
 Queue q;
 }


TEST_CASE("Pushing")
 {
 Queue q;
 std::string a = "A";
  q.push(a);
 }


TEST_CASE("Popping")
 {
 Queue q;
 std::string str = q.pop();
 }


TEST_CASE("has_next")
 {
 Queue q;
 bool b = q.has_next();
 }

