#include <iostream>
using namespace std;
#define V 4      
#define INF 9999 

int minDistance(int dist[], bool visited[]) {
    int min = INF, min_index;

    for (int v = 0; v < V; v++) {
        if (!visited[v] && dist[v] <= min) {
            min = dist[v], min_index = v;
        }}
    return min_index;
}
void dijkstra(int graph[V][V], int src) {
    int dist[V];      // Shortest distance from src to i
    bool visited[V];  // True if vertex is included in shortest path

    for (int i = 0; i < V; i++) {
        dist[i] = INF;
        visited[i] = false;
    }
    dist[src] = 0;  // Distance from src to itself is always 0

    // Find shortest path for all vertices
    for (int count = 0; count < V - 1; count++) {
        int u = minDistance(dist, visited);
        visited[u] = true;
        // Update dist[] of the adjacent vertices
        for (int v = 0; v < V; v++) {
            if (!visited[v] && graph[u][v] && dist[u] != INF 
                && dist[u] + graph[u][v] < dist[v]) {
                dist[v] = dist[u] + graph[u][v];
            }}}
    cout << "Vertex \t Distance from Source\n";
    for (int i = 0; i < V; i++)
        cout << i << " \t\t " << dist[i] << endl;
}
int main() {
    // Example graph represented as adjacency matrix
    int graph[V][V] = { 
        {0, 2, 1, 0},  // A
        {2, 0, 0, 4},  // B
        {1, 0, 0, 3},  // C
        {0, 4, 3, 0}   // D
    };
    dijkstra(graph, 0);  // Starting from vertex 0 (A)
    return 0;
}
