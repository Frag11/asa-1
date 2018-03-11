#include <vector>
#include <algorithm>

#include "graph.h"

graph::graph(int vertex_count)
    : _sorted(true)
    , _edges(vertex_count) {}

void graph::add_edge(int from, int to) {
    _sorted = false;
    _edges[from].push_back(to);
}

void graph::sort_edges() {
    if (!_sorted) {
        for (auto &edges: _edges)
            std::sort(edges.begin(), edges.end());
        _sorted = true;
    }
}

void graph::reduce_sccs() {
    sort_edges();

    // Find Sccs using Tarjan's
    // For each scc find all outward edges and put them on the
    // smaller vertex while removing them from the other vertices
}
