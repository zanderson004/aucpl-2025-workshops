#include <bits/stdc++.h>
using namespace std;

int search(vector<int>& arr, int target, int l, int r) {
    while (l < r) {
        int mid = (l + r) / 2;
        if (arr[mid] == target) return mid;
        else if (target < arr[mid]) r = mid - 1;
        else l = mid + 1;
    }
    return -1;
}

int search(vector<int>& arr, int target) {
    return search(arr, target, 0, arr.size()-1);
}

int main() {
    vector<int> arr{1, 2, 3, 4, 5, 6};
    cout << search(arr, 3) << "\n";
    cout << search(arr, 7) << "\n";
}




