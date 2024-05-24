#include <iostream>
#include <vector>
#include <algorithm>

// Define a structure for edges
struct Edge {
    int src, dest, weight;
};

// Function to find the root of a vertex
int find(std::vector<int>& parent, int i) {
    if (parent[i] == i) {
        return i;
    }
    return find(parent, parent[i]);
}

// Function to perform union of two sets
void Union(std::vector<int>& parent, std::vector<int>& rank, int x, int y) {
    int rootX = find(parent, x);
    int rootY = find(parent, y);

    if (rank[rootX] < rank[rootY]) {
        parent[rootX] = rootY;
    } else if (rank[rootX] > rank[rootY]) {
        parent[rootY] = rootX;
    } else {
        parent[rootY] = rootX;
        rank[rootX]++;
    }
}

// Function to perform Kruskal's algorithm to find the MST
void KruskalMST(std::vector<Edge>& edges, int V) {
    std::vector<int> parent(V);
    std::vector<int> rank(V, 0);

    // Initialize the parent array
    for (int i = 0; i < V; ++i) {
        parent[i] = i;
    }

    // Sort edges in non-decreasing order of their weight
    std::sort(edges.begin(), edges.end(), [](Edge a, Edge b) {
        return a.weight < b.weight;
    });

    std::vector<Edge> mst; // To store the resultant MST

    for (const auto& edge : edges) {
        int rootX = find(parent, edge.src);
        int rootY = find(parent, edge.dest);

        // If including this edge doesn't form a cycle
        if (rootX != rootY) {
            mst.push_back(edge); // Include it in the MST
            Union(parent, rank, rootX, rootY);
        }
    }

    // Print the resulting MST
    std::cout << "Edges in the Minimum Spanning Tree:" << std::endl;
    for (const auto& edge : mst) {
        std::cout << edge.src << " -- " << edge.dest << " == " << edge.weight << std::endl;
    }
}

int main() {
    int V = 6; // Number of vertices in the graph
    std::vector<Edge> edges = {
        {0, 1, 4}, {0, 2, 1}, {1, 2, 3}, {1, 3, 2}, {1, 4, 3}, {2, 5, 7}, {3, 4, 5}
    };

    KruskalMST(edges, V);

    return 0;
}
