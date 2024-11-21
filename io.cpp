#include "io.h"
#include <iostream>

bool readGraphFromFile(const std::string& filename, std::vector<std::vector<Edge>>& graph, int& start) {
    std::ifstream file(filename);
    if (!file.is_open()) {
        return false;
    }

    int n, m;
    file >> n >> m;

    graph.resize(n);

    for (int i = 0; i < m; ++i) {
        int u, v, weight;
        file >> u >> v >> weight;
        graph[u].push_back({v, weight});
    }

    file >> start;
    file.close();
    return true;
}

bool writeResultsToFile(const std::string& filename, const std::vector<int>& dist) {
    std::ofstream file(filename);
    if (!file.is_open()) {
        return false;
    }

    for (int i = 0; i < dist.size(); ++i) {
        if (dist[i] == INT_MAX) {
            file << "error" << std::endl;
        } else {
            file << dist[i] << std::endl;
        }
    }

    file.close();
    return true;
}