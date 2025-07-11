#include <iostream>
#include <algorithm>
using namespace std;
struct Edge {
    int u, v, weight;
};
bool cmp(const Edge& a, const Edge& b) {
    return a.weight < b.weight;
}
struct DSU {
    int* parent;
    int* rank;
    DSU(int n) {
        parent = new int[n];
        rank = new int[n];
        for(int i=0; i<n; ++i) {
            parent[i] = i;
            rank[i] = 0;}}
    ~DSU() {
        delete[] parent;
        delete[] rank;}
    int find(int x) {
        if(parent[x] != x) parent[x] = find(parent[x]);
        return parent[x];}
    bool unite(int x, int y) {
        int xr = find(x), yr = find(y);
        if(xr == yr) return false;
        if(rank[xr] < rank[yr]) parent[xr] = yr;
        else if(rank[xr] > rank[yr]) parent[yr] = xr;
        else { parent[yr] = xr; rank[xr]++; }
        return true;}};
int main() {
    int n, m;
    cout << "Enter number of vertices and edges: ";
    cin >> n >> m;
    Edge* edges = new Edge[m];
    cout << "Enter edges (u v weight):\n";
    for(int i=0; i<m; ++i) {
        cin >> edges[i].u >> edges[i].v >> edges[i].weight;}
    sort(edges, edges + m, cmp);
    DSU dsu(n);
    int mst_weight = 0;
    cout << "Edges in MST:\n";
    for(int i=0; i<m; ++i) {
        if(dsu.unite(edges[i].u, edges[i].v)) {
            cout << edges[i].u << " - " << edges[i].v << " : " << edges[i].weight << endl;
            mst_weight += edges[i].weight;
        }}
    cout << "Total weight of MST: " << mst_weight << endl;
    delete[] edges;
    return 0;}