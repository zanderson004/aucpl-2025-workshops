using namespace std;
#include <vector>
#include <unordered_set>
#include <iostream>

bool dfs(vector<vector<int>>& adjacencyList, unordered_set<int>& visited, int node) {
    visited.insert(node);

    for (int neighbor : adjacencyList[node]) {
        if (visited.count(neighbor)) return true;
        else if (dfs(adjacencyList, visited, neighbor)) return true;
    }

    return false;
}

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
    stack<int> stk;

    stk.push(1);
    visited.insert(1);

    while (!stk.empty()) {
        auto current = stk.top();
        stk.pop();

        for (int neighbor : adjacencyList[current]) {
            if (visited.count(neighbor)) cout << "cycle" << endl;
            else {
                stk.push(neighbor);
                visited.insert(neighbor);
            }
        }
    }

    // cout << dfs(adjacencyList, visited, 1) << endl;

    return 0;
}


