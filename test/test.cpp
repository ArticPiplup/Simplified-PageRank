//#include <catch2/catch_test_macros.hpp>
//#include <iostream>
//#include "AdjacencyList.h"
//
//using namespace std;
//
//// Only one node is a outLinker.
//TEST_CASE("Test 1 - One Link", "[created]") {
//
//    string input = R"(1 3
//giver.com receiver.com)";
//
//    string expectedOutput = R"(giver.com 0.00
//receiver.com 0.00
//)";
//
//    std::istringstream iss(input);
//    AdjacencyList adjacencyList;
//    int no_of_lines, power_iterations;
//    iss >> no_of_lines >> power_iterations;
//    std::string from, to;
//    for (int i = 0; i < no_of_lines; ++i) {
//        iss >> from >> to;
//        adjacencyList.EdgeReceiver(from, to);
//    }
//
//    std::string actualOutput = adjacencyList.PageRank(power_iterations);
//
//    REQUIRE(actualOutput == expectedOutput);
//}
//
//// Very large value for power iterations.
//TEST_CASE("Test 2 - Large P Value", "[created]") {
//
//    string input = R"(7 10000
//google.com gmail.com
//google.com maps.com
//facebook.com ufl.edu
//ufl.edu google.com
//ufl.edu gmail.com
//maps.com facebook.com
//gmail.com maps.com)";
//
//    string expectedOutput = R"(facebook.com 0.24
//gmail.com 0.18
//google.com 0.12
//maps.com 0.24
//ufl.edu 0.24
//)";
//
//    std::istringstream iss(input);
//    AdjacencyList adjacencyList;
//    int no_of_lines, power_iterations;
//    iss >> no_of_lines >> power_iterations;
//    std::string from, to;
//    for (int i = 0; i < no_of_lines; ++i) {
//        iss >> from >> to;
//        adjacencyList.EdgeReceiver(from, to);
//    }
//
//    std::string actualOutput = adjacencyList.PageRank(power_iterations);
//
//    REQUIRE(actualOutput == expectedOutput);
//}
//
//// Circular Graph
//TEST_CASE("Test 3 - Circular Graph", "[created]") {
//
//    string input = R"(5 10
//google.com gmail.com
//gmail.com facebook.com
//facebook.com maps.com
//maps.com ufl.edu
//ufl.edu google.com)";
//
//    string expectedOutput = R"(facebook.com 0.20
//gmail.com 0.20
//google.com 0.20
//maps.com 0.20
//ufl.edu 0.20
//)";
//
//    std::istringstream iss(input);
//    AdjacencyList adjacencyList;
//    int no_of_lines, power_iterations;
//    iss >> no_of_lines >> power_iterations;
//    std::string from, to;
//    for (int i = 0; i < no_of_lines; ++i) {
//        iss >> from >> to;
//        adjacencyList.EdgeReceiver(from, to);
//    }
//
//    std::string actualOutput = adjacencyList.PageRank(power_iterations);
//
//    REQUIRE(actualOutput == expectedOutput);
//}
//
//// Separated Groups Graph
//TEST_CASE("Test 4 - Separated Group Graphs", "[created]") {
//
//    string input = R"(9 10
//google.com gmail.com
//gmail.com facebook.com
//facebook.com google.com
//googlemaps.com applemaps.com
//googlemaps.com ebay.com
//applemaps.com ebay.com
//applemaps.com googlemaps.com
//ebay.com googlemaps.com
//ebay.com applemaps.com
//)";
//
//    string expectedOutput = R"(applemaps.com 0.17
//ebay.com 0.17
//facebook.com 0.17
//gmail.com 0.17
//google.com 0.17
//googlemaps.com 0.17
//)";
//
//    std::istringstream iss(input);
//    AdjacencyList adjacencyList;
//    int no_of_lines, power_iterations;
//    iss >> no_of_lines >> power_iterations;
//    std::string from, to;
//    for (int i = 0; i < no_of_lines; ++i) {
//        iss >> from >> to;
//        adjacencyList.EdgeReceiver(from, to);
//    }
//
//    std::string actualOutput = adjacencyList.PageRank(power_iterations);
//
//    REQUIRE(actualOutput == expectedOutput);
//}
//
//// Every Node pointing to every Node
//TEST_CASE("Test 5 - Every Node Points to Every Node", "[created]") {
//
//    string input = R"(20 10
//apple.com google.com
//apple.com facebook.com
//apple.com gmail.com
//apple.com samsung.com
//google.com apple.com
//google.com facebook.com
//google.com gmail.com
//google.com samsung.com
//facebook.com apple.com
//facebook.com google.com
//facebook.com gmail.com
//facebook.com samsung.com
//gmail.com apple.com
//gmail.com google.com
//gmail.com facebook.com
//gmail.com samsung.com
//samsung.com apple.com
//samsung.com google.com
//samsung.com facebook.com
//samsung.com gmail.com)";
//
//    string expectedOutput = R"(apple.com 0.20
//facebook.com 0.20
//gmail.com 0.20
//google.com 0.20
//samsung.com 0.20
//)";
//
//    std::istringstream iss(input);
//    AdjacencyList adjacencyList;
//    int no_of_lines, power_iterations;
//    iss >> no_of_lines >> power_iterations;
//    std::string from, to;
//    for (int i = 0; i < no_of_lines; ++i) {
//        iss >> from >> to;
//        adjacencyList.EdgeReceiver(from, to);
//    }
//
//    std::string actualOutput = adjacencyList.PageRank(power_iterations);
//
//    REQUIRE(actualOutput == expectedOutput);
//}
//
//
