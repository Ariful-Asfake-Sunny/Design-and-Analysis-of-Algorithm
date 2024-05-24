#include <iostream>
#include <vector>
#include <stack>

// Function to perform iterative DFS
void DFSIterative(const std::vector<std::vector<int>>& adjList, int start) {
    std::vector<bool> visited(adjList.size(), false);
    std::stack<int> stack;

    // Start from the given node
    stack.push(start);

    std::cout << "DFS Traversal starting from node " << start << ": ";

    while (!stack.empty()) {
        int node = stack.top();
        stack.pop();

        if (!visited[node]) {
            std::cout << node << " ";
            visited[node] = true;

            // Visit all the neighbors of the current node
            for (auto it = adjList[node].rbegin(); it != adjList[node].rend(); ++it) {
                if (!visited[*it]) {
                    stack.push(*it);
                }
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

    DFSIterative(adjList, 0); // Perform DFS starting from node 0

    return 0;
}
