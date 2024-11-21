#ifndef IO_H
#define IO_H

#include <vector>
#include <fstream>
#include <string>

struct Edge {
    int to;
    int weight;
};

bool readGraphFromFile(const std::string& filename, std::vector<std::vector<Edge>>& graph, int& start);
bool writeResultsToFile(const std::string& filename, const std::vector<int>& dist);

#endif