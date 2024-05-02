#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> multiplyMatrices(const vector<vector<int>>& A, const vector<vector<int>>& B) {
    int m = A.size();
    int n = A[0].size();
    int p = B[0].size();
    
    vector<vector<int>> C(m, vector<int>(p, 0));

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < p; ++j) {
            for (int k = 0; k < n; ++k) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    return C;
}

int main() {
    // Input matrices A and B
    vector<vector<int>> A = {{1, 2, 3}, {4, 5, 6}};
    vector<vector<int>> B = {{7, 8}, {9, 10}, {11, 12}};

    // Perform matrix multiplication
    vector<vector<int>> C = multiplyMatrices(A, B);

    // Output the resulting matrix
    cout << "Resulting matrix C:" << endl;
    for (int i = 0; i < C.size(); ++i) {
        for (int j = 0; j < C[0].size(); ++j) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
