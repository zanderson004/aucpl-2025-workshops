#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    
    vector<int> copy = arr;
    next_permutation(arr.begin(), arr.end());

    int permutations = 1;
    while (arr != copy) {
        permutations++;
        next_permutation(arr.begin(), arr.end());
    }

    cout << permutations << "\n";
}


