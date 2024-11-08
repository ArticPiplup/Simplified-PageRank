#include "AdjacencyList.h"


using namespace std;

AdjacencyList::AdjacencyList() = default;

// Function inits an edge, creates the inlink, the outlink and increases the size of the set.
void AdjacencyList::EdgeReceiver(const std::string& from_, const std::string& to_) {
    outLinksUpdate(from_, to_);
    inLinksUpdate(from_, to_);
    pagesSetUpdate(from_, to_);
}

void AdjacencyList::outLinksUpdate(const string& from_, const string& to_) {
    outLinks[from_].push_back(to_);
}

void AdjacencyList::inLinksUpdate(const string& from_, const string& to_) {
    inLinks[to_].push_back(from_);
}

void AdjacencyList::pagesSetUpdate(const string& from_, const string& to_) {
    webPages.insert(from_);
    webPages.insert(to_);
    size = getWebPages().size();
}

// prints the PageRank of all pages after p powerIterations in ascending
// alphabetical order of webpages and rounding rank to two decimal places
std::string AdjacencyList::PageRank(int n){
    // optionally, store your output in a string/stringstream and then return it from this function after printing so that it is easier to test with Catch
    for (const auto& page: webPages) {
        ranks[page] = 1.0f / size;
    }

    // This for loop will run the number of power iterations.
    for (int i = 1; i < n; ++i) {
        unordered_map<string, double> temp_ranks = ranks;

        // This for loop will iterate through the webPages on the set.
        for (const auto& page: webPages) {
            float new_rank = 0.0;

            // This for loop iterates through the inLinks of each webPage.
            for (const auto& in_link : inLinks[page]) {
                new_rank += ranks[in_link] / outLinks[in_link].size();
            }

            temp_ranks[page] = new_rank;
        }

        ranks = temp_ranks;
    }
    vector<string> sorted_pages(webPages.begin(), webPages.end());
    sort(sorted_pages.begin(), sorted_pages.end());

    stringstream result;
    for (const auto& page :sorted_pages) {
        result << page << " " << fixed << setprecision(2) << ranks[page] << endl;
    }

    cout << result.str();
    return result.str();
}

std::set<string> AdjacencyList::getWebPages() {
    return webPages;
}

// Debugging Functions
string AdjacencyList::sortAndPrint() {
    vector<string> sorted_pages(webPages.begin(), webPages.end());
    sort(sorted_pages.begin(), sorted_pages.end());

    stringstream result;
    for (const auto& page :sorted_pages) {
        result << page << " " << fixed << setprecision(2) << ranks[page] << endl;
    }

    cout << result.str();
    return result.str();
}

void AdjacencyList::printAllOutInLinks() {
    for (auto& element : webPages) {
        cout << "WebPage: " << element << endl;

        cout << "   OutLinks: " << endl;
        for (const auto & i : outLinks[element]) {
            cout << "       " << i << endl;
        }

        cout << "   InLinks: " << endl;
        for (const auto & i : inLinks[element]) {
            cout << "       " << i << endl;
        }
        cout << endl;
    }
}






