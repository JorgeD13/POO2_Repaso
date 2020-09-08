//
// Created by Jorge on 20/08/2020.
//

#include "graph.h"
#define INF numeric_limits<int>::max()
using iPair = pair<int, int>;

graph::graph(int Vertices) {
    V = Vertices;
    Adj = new vector<iPair> [V];
}

graph::~graph() {
    delete []Adj;
}

void graph::addEdge(int v1, int v2, int dist) {
    Adj[v1].emplace_back(dist, v2);
    sort(Adj[v1].begin(), Adj[v1].end());
}

void graph::print() {
    cout << "Graph:\n";
    for (int i = 0; i < V; i++) {
        cout << i << ": ";
        for (auto x : Adj[i]) {
            cout << x.second << "(" << x.first << ") ";
        }
        cout << endl;
    }
}

void graph::Dijkstra(int src) {
    priority_queue<iPair, vector<iPair>, greater<>> pq;
    vector<int> dist(V, INF);
    dist[src] = 0;
    pq.push(make_pair(0, src));

    while (!pq.empty()) {
        int u = pq.top().second;
        pq.pop();
        vector<iPair>::iterator it;
        for (it = Adj[u].begin(); it != Adj[u].end(); ++it) {
            int v = (*it).second;
            int weight = (*it).first;
            if (dist[v] > dist[u] + weight) {
                dist[v] = dist[u] + weight;
                pq.push(make_pair(dist[v], v));
            }
        }
    }

    cout << "Print Dijkstra:\n";
    int n = 0;
    for (auto x : dist) {
        cout << n++ << ": " << x << endl;
    }
}
