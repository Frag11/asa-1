#include <fstream>
#include <iostream>

#include "graph.h"

int main(int count, const char *const args[]) {
    if (count != 2) {
        std::cerr << "Use: " << args[0] << " <file-name>" << std::endl;
    }

    std::ifstream input_file(args[1]);
    if (!input_file) {
        std::cerr << "Unable to open file" << args[1] << std::endl;
        return 1;
    }

    int vertex_count, edge_count;
    if (!(input_file >> vertex_count >> edge_count)) {
        std::cerr << "Error reading input file" << std::endl;
    }

    graph graph(vertex_count);

    for (int from, to; edge_count && input_file >> from >> to; edge_count--)
        graph.add_edge(from, to);

}