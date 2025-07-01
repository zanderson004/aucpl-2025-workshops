#include <bits/stdc++.h>
using namespace std;

int search(vector<int>& arr, int target) {
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == target) return i;
    }
    return -1;
}

int main() {
    vector<int> arr{1, 2, 3, 4, 5, 6};
    cout << search(arr, 3) << "\n";
    cout << search(arr, 7) << "\n";
}




