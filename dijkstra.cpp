#include "dijkstra.h"
#include <queue>
#include <climits>

struct Compare {
    bool operator()(const std::pair<int, int>& a, const std::pair<int, int>& b) {
        return a.second > b.second;
    }
};

void dijkstra(int start, const std::vector<std::vector<Edge>>& graph, std::vector<int>& dist) {
    int n = graph.size();
    dist.assign(n, INT_MAX);
    dist[start] = 0;

    std::priority_queue<std::pair<int, int>, std::vector<std::pair<int, int>>, Compare> pq;
    pq.push({start, 0});

    while (!pq.empty()) {
        int u = pq.top().first;
        int d = pq.top().second;
        pq.pop();

        if (d > dist[u]) continue;

        for (const Edge& edge : graph[u]) {
            int v = edge.to;
            int weight = edge.weight;

            if (dist[u] + weight < dist[v]) {
                dist[v] = dist[u] + weight;
                pq.push({v, dist[v]});
            }
        }
    }
}