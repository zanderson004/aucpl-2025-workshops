using namespace std;
#include <vector>
#include <iostream>

#define X INT_MAX

int main() {

    vector<vector<int>> adjacencyMatrix = {
        {0, X, X, X, X},
        {X, 0, 1, 1, 3},
        {X, 1, 0, 2, X},
        {X, 1, 2, 0, 2},
        {X, 3, X, 2, 0}
    };

    int n = adjacencyMatrix.size();

    for (int k = 0; k < n; k++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (adjacencyMatrix[i][k] != X && adjacencyMatrix[k][j] != X) {
                    adjacencyMatrix[i][j] = min(adjacencyMatrix[i][j], adjacencyMatrix[i][k] + adjacencyMatrix[k][j]);
                }
            }
        }
    }

    for (auto& v : adjacencyMatrix) {
        for (auto i : v) cout << (i == X ? "INF" : to_string(i)) << " ";
        cout << endl;
    }

    return X;
}

