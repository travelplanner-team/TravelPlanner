#ifndef DIJKSTRA_H
#define DIJKSTRA_H

#include <vector>
#include <queue>
#include <limits>
#include "graph.h"

using namespace std;

inline vector<double> dijkstra(const Graph& graph, int source) {
    int n = graph.getNumNodes();

    vector<double> dist(n, numeric_limits<double>::infinity());
    dist[source] = 0.0;

    priority_queue<
        pair<double, int>,
        vector<pair<double, int>>,
        greater<pair<double, int>>
    > pq;

    pq.push({0.0, source});

    while (!pq.empty()) {
        auto [currentDist, u] = pq.top();
        pq.pop();
        if (currentDist > dist[u])
            continue;

        for (const auto& [v, weight] : graph.getNeighbors(u)) {
            double newDist = currentDist + weight;

            if (newDist < dist[v]) {
                dist[v] = newDist;
                pq.push({newDist, v});
            }
        }
    }

    return dist;
}

#endif
