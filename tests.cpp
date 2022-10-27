#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"
#include "fact.h"


TEST_CASE("Factorial Base Cases"){
  CHECK(fact(0) == 1);
  CHECK(fact(1) == 1);
}

TEST_CASE("Factorial of small numbers"){
  CHECK(fact(2) == 2);
  CHECK(fact(3) == 6);
  CHECK(fact(4) == 24);
}

TEST_CASE("Factorial of large numbers"){
  CHECK(fact(5) == 120);
  CHECK(fact(505) == 100);
}
