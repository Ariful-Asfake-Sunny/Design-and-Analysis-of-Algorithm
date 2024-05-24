#include <iostream>
#include <vector>
#include <queue>

// Function to perform BFS
void BFS(const std::vector<std::vector<int>>& adjList, int start) {
    std::vector<bool> visited(adjList.size(), false);
    std::queue<int> q;

    // Start from the given node
    visited[start] = true;
    q.push(start);

    std::cout << "BFS Traversal starting from node " << start << ": ";

    while (!q.empty()) {
        int node = q.front();
        q.pop();
        std::cout << node << " ";

        // Visit all the neighbors of the current node
        for (int neighbor : adjList[node]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }

    std::cout << std::endl;
}

int main() {
    std::vector<std::vector<int>> adjList = {
        {1, 2}, // neighbors of node 0
        {0, 3, 4}, // neighbors of node 1
        {0, 5}, // neighbors of node 2
        {1}, // neighbors of node 3
        {1}, // neighbors of node 4
        {2}  // neighbors of node 5
    };

    BFS(adjList, 0); // Perform BFS starting from node 0

    return 0;
}
