#include <iostream>
#include <fstream>
#include "dijkstra.h"
#include "io.h"

int main() {
    std::vector<std::vector<Edge>> graph;
    int start;

    if (!readGraphFromFile("input.txt", graph, start)) {
        std::cerr << "error graph" << std::endl;
        return 1;
    }

    std::vector<int> dist(graph.size());
    dijkstra(start, graph, dist);

    if (!writeResultsToFile("output.txt", dist)) {
        std::cerr << "error" << std::endl;
        return 1;
    }

    return 0;
}