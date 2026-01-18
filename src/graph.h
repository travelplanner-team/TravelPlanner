#ifndef GRAPH_H
#define GRAPH_H

#include <vector>
#include <utility>

using namespace std;

class Graph {
private:
    int numNodes;
    vector<vector<pair<int, double>>> adjList;

public:
    Graph(int nodes);
    void addEdge(int from, int to, double distance);

    const vector<pair<int, double>>& getNeighbors(int node) const;

    int getNumNodes() const;
};

#endif
