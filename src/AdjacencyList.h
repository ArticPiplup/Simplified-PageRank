#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <set>
#include <iterator>
#include <algorithm>
#include <sstream>
#include <iomanip>


using namespace std;

class AdjacencyList {
    private:
    std::unordered_map<std::string, double> ranks;
    std::unordered_map<std::string, std::vector<string>> outLinks;
    std::unordered_map<std::string, std::vector<string>> inLinks;
    std::set<std::string> webPages;
    int size = 0;

public:
    AdjacencyList();
    void EdgeReceiver(const std::string& from_, const std::string& to_);
    void outLinksUpdate(const std::string& from_, const std::string& to_);
    void inLinksUpdate(const std::string& from_, const std::string& to_);
    void pagesSetUpdate(const std::string& from_, const std::string& to_);
    std::string PageRank(int n);
    std::set<string> getWebPages();

    // Debugging Functions
    string sortAndPrint();
    void printAllOutInLinks();
};

// This class and method are optional.
