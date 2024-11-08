#include <iostream>

#include "AdjacencyList.h"

using namespace std;



int main() {
    AdjacencyList AdjacencyList1;

    int no_of_lines, power_iterations;
    string from, to;

    // This will limit the number of links that will be produced.
    cin >> no_of_lines;

    cin >> power_iterations;

    // Each of these iterations will creat a link from-->to.
    for (int i = 0; i < no_of_lines; i++) {
        cin >> from;
        cin >> to;
        AdjacencyList1.EdgeReceiver(from, to);
    }
    AdjacencyList1.PageRank(power_iterations);
}
