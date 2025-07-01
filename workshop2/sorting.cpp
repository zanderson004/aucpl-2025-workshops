#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr{3, 1, 9, 6, 4};
    vector<array<int, 3>> arr2{{1, 2, 3}, {4, 6, 3}, {3, 9, 6}};

    sort(arr.begin(), arr.end());
    sort(arr.begin(), arr.end(), greater<int>());
    sort(arr.begin(), arr.end(), [](auto& lhs, auto& rhs){return lhs > rhs;});
    for (int i : arr) cout << i << " ";
    cout << "\n";

    sort(arr2.begin(), arr2.end(), [](auto& lhs, auto& rhs){return lhs[1] > rhs[1];});
    for (auto& arr : arr2) {
        cout << "{" << arr[0] << ", " << arr[1] << ", " << arr[2] << "} ";
    }
    cout << "\n";
}




