using namespace std;
#include <vector>
#include <queue>
#include <iostream>

int main() {

    vector<vector<pair<int, int>>> adjacencyList = {
        {{1, 3}, {3, 7}, {4, 8}},
        {{0, 3}, {2, 1}, {3, 4}},
        {{1, 1}, {3, 2}},
        {{0, 7}, {1, 4}, {2, 2}, {4, 3}},
        {{0, 8}, {3, 3}}
    };

    int n = adjacencyList.size();

    vector<int> distances(n, INT_MAX);

    priority_queue<int> pq;
    pq.push(0);
    distances[0] = 0;

    while (!pq.empty()) {
        int current = pq.top();
        pq.pop();

        for (auto [next, weight] : adjacencyList[current]) {
            if (distances[current] + weight < distances[next]) {
                distances[next] = distances[current] + weight;
                pq.push(next);
            }
        }
    }

    for (int i : distances) cout << (i == INT_MAX ? "INF" : to_string(i)) << " ";
    cout << endl;

    return 0;
}

