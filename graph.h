#pragma once

#include <vector>

class graph {
    bool _sorted;
    std::vector<std::vector<int>> _edges;
public:
    explicit graph(int vertex_count);

    void add_edge(int from, int to);

    void sort_edges();

    void reduce_sccs();
};
