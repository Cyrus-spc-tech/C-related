#include <iostream>
using namespace std;
#define V 5
#define INF 9999

int minKey(int key[], bool mstSet[]) {
    int min = INF, min_index;
    for (int v = 0; v < V; v++)
        if (!mstSet[v] && key[v] < min)
            min = key[v], min_index = v;
    return min_index;
}
void primMST(int graph[V][V]) {
    int parent[V]; // Store MST edges
    int key[V];    // Minimum weight to reach each node
    bool mstSet[V];

    for (int i = 0; i < V; i++)
        key[i] = INF, mstSet[i] = false;

    key[0] = 0;     // Start from vertex 0
    parent[0] = -1; // Root

    for (int count = 0; count < V - 1; count++) {
        int u = minKey(key, mstSet);
        mstSet[u] = true;

        for (int v = 0; v < V; v++)
            if (graph[u][v] && !mstSet[v] && graph[u][v] < key[v])
                parent[v] = u, key[v] = graph[u][v];
    }
    cout << "Edge \tWeight\n";
    for (int i = 1; i < V; i++)
        cout << parent[i] << " - " << i << " \t" << graph[i][parent[i]] << endl;
}
int main() {
    int graph[V][V] = {
        {0, 2, 0, 6, 0},
        {2, 0, 3, 8, 5},
        {0, 3, 0, 0, 7},
        {6, 8, 0, 0, 9},
        {0, 5, 7, 9, 0},
    };

    primMST(graph);
    return 0;
}
