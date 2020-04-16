// 010-TestCase.cpp

// Let Catch provide main():
#define CATCH_CONFIG_MAIN
#include "college.h"
#include "catch.hpp"

TEST_CASE( "GPA has to be greater than 1 or less or equal to 5", "[GPA-TEST"){
    College list = College("Test");
    course mycollege;
        mycollege.set_course("2401", "B", 3);

    WHEN("has B"){
        REQUIRE(list.gpa() == 3);
    }
}


// Compile & run:
// - g++ -std=c++11 -Wall -I$(CATCH_SINGLE_INCLUDE) -o 010-TestCase 010-TestCase.cpp && 010-TestCase --success
// - cl -EHsc -I%CATCH_SINGLE_INCLUDE% 010-TestCase.cpp && 010-TestCase --success

// Expected compact output (all assertions):
//
// prompt> 010-TestCase --reporter compact --success
// 010-TestCase.cpp:14: failed: Factorial(0) == 1 for: 0 == 1
// 010-TestCase.cpp:18: passed: Factorial(1) == 1 for: 1 == 1
// 010-TestCase.cpp:19: passed: Factorial(2) == 2 for: 2 == 2
// 010-TestCase.cpp:20: passed: Factorial(3) == 6 for: 6 == 6
// 010-TestCase.cpp:21: passed: Factorial(10) == 3628800 for: 3628800 (0x375f00) == 3628800 (0x375f00)
// Failed 1 test case, failed 1 assertion.
// © 2020 GitHub, Inc.