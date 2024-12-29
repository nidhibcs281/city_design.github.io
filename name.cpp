#include <iostream>
#include <tuple>
#include <vector>
#include <algorithm>
#include <fstream>

using namespace std;

class Kruskal {
public:
    // Find the root of a node using path compression
    int root(int arr[], int i) {
        while (arr[i] != i) {
            arr[i] = arr[arr[i]]; // Path compression
            i = arr[i];
        }
        return i;
    }

    // Check if two nodes belong to the same set
    bool find(int u, int v, int arr[]) {
        return root(arr, u) == root(arr, v);
    }

    // Union of two sets
    void union_sets(int arr[], int u, int v) {
        int root_u = root(arr, u);
        int root_v = root(arr, v);
        arr[root_u] = root_v;
    }

    // Implementation of Kruskal's algorithm
    void kruskal(int n, const vector<tuple<int, int, int>> &edges) {
        int arr[n];
        for (int i = 0; i < n; ++i) {
            arr[i] = i;
        }

        // Sort edges by weight
        vector<tuple<int, int, int>> sorted_edges = edges;
        sort(sorted_edges.begin(), sorted_edges.end());

        int mst_weight = 0;
        cout << "Edges in the MST:" << endl;

        for (const auto &edge : sorted_edges) {
            int weight = get<0>(edge);
            int node_u = get<1>(edge);
            int node_v = get<2>(edge);

            if (!find(node_u, node_v, arr)) {
                union_sets(arr, node_u, node_v);
                cout << node_u << " - " << node_v << " (Weight: " << weight << ")" << endl;
                mst_weight += weight;
            }
        }

        cout << "Total weight of MST: " << mst_weight << endl;
    }
};

int main() {
    vector<tuple<int, int, int>> edges;
    int max_vertex_id = 0;

    // Read input from the file
    ifstream file("saniya_kruskals.txt");
    if (!file.is_open()) {
        cerr << "Error opening file." << endl;
        return 1;
    }

    int weight, u, v;
    while (file >> weight >> u >> v) {
        edges.emplace_back(weight, u, v);
        max_vertex_id = max({max_vertex_id, u, v});
    }
    file.close();

    int n = max_vertex_id + 1; // Max vertex ID + 1 for zero-based indexing

    Kruskal k;
    k.kruskal(n, edges);

    return 0;
}
