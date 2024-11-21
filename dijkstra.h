#ifndef DIJKSTRA_H
#define DIJKSTRA_H

#include <vector>

struct Edge {
    int to;
    int weight;
};

void dijkstra(int start, const std::vector<std::vector<Edge>>& graph, std::vector<int>& dist);

#endif