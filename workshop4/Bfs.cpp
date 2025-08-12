using namespace std;
#include <vector>
#include <unordered_set>
#include <iostream>

int main() {

    vector<vector<int>> adjacencyList {
        {},
        {2},
        {1, 3, 4},
        {2, 5},
        {2, 5, 6},
        {3, 4, 6},
        {4, 5}
    };

    unordered_set<int> visited;
    queue<pair<int, int>> q;

    q.push({1, 0});
    visited.insert(1);

    while (!q.empty()) {
        auto [current, distance] = q.front();
        q.pop();

        for (int neighbor : adjacencyList[current]) {
            if (!visited.count(neighbor)) {
                q.push({neighbor, distance + 1});
                visited.insert(neighbor);
            }
        }

        if (current == 6) cout << "distance to node 6: " << distance << endl;
    }

    return 0;
}


