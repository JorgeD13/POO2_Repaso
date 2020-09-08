//
// Created by Jorge on 20/08/2020.
//

#ifndef TRAINING_GRAPH_H
#define TRAINING_GRAPH_H

#include "../lib.h"

class graph {
    int V;
    vector<pair<int, int>> *Adj;
public:
    explicit graph(int Vertices);
    ~graph();
    void addEdge(int v1, int v2, int dist);
    void print();
    void Dijkstra(int src);
};

#endif //TRAINING_GRAPH_H
