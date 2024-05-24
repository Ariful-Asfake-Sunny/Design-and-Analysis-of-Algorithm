#include <iostream>
#include <vector>
#include <queue>

// Function to perform Topological Sort using Kahn's Algorithm
std::vector<int> topologicalSort(const std::vector<std::vector<int>>& adjList) {
    int n = adjList.size();
    std::vector<int> inDegree(n, 0);
    std::vector<int> topoOrder;
    std::queue<int> q;

    // Step 1: Compute in-degree for each vertex
    for (int i = 0; i < n; ++i) {
        for (int neighbor : adjList[i]) {
            inDegree[neighbor]++;
        }
    }

    // Step 2: Enqueue all vertices with in-degree 0
    for (int i = 0; i < n; ++i) {
        if (inDegree[i] == 0) {
            q.push(i);
        }
    }

    // Step 3: Process the queue
    while (!q.empty()) {
        int node = q.front();
        q.pop();
        topoOrder.push_back(node);

        // Decrease the in-degree of neighboring vertices
        for (int neighbor : adjList[node]) {
            inDegree[neighbor]--;
            if (inDegree[neighbor] == 0) {
                q.push(neighbor);
            }
        }
    }

    // Check for cycles
    if (topoOrder.size() != n) {
        std::cerr << "Graph has a cycle. Topological sort not possible." << std::endl;
        return {};
    }

    return topoOrder;
}

int main() {
    std::vector<std::vector<int>> adjList = {
        {},    // neighbors of node 0
        {},    // neighbors of node 1
        {1},   // neighbors of node 2
        {},    // neighbors of node 3
        {0},   // neighbors of node 4
        {0, 2} // neighbors of node 5
    };

    std::vector<int> topoOrder = topologicalSort(adjList);

    if (!topoOrder.empty()) {
        std::cout << "Topological Sort Order: ";
        for (int node : topoOrder) {
            std::cout << node << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
