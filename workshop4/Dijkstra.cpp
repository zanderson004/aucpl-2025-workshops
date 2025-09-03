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

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, 0});
    distances[0] = 0;

    while (!pq.empty()) {
        auto [priority, current] = pq.top();
        pq.pop();

        if (priority > distances[current]) continue;

        for (auto [next, weight] : adjacencyList[current]) {
            if (distances[current] + weight < distances[next]) {
                distances[next] = distances[current] + weight;
                pq.push({distances[next], next});
            }
        }
    }

    for (int i : distances) cout << (i == INT_MAX ? "INF" : to_string(i)) << " ";
    cout << endl;

    return 0;
}

