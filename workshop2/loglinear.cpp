#include <bits/stdc++.h>
using namespace std;

int logarithmic(int n) {
    int sum = 0;
    for (int i = 0; i < n; i *= 2) {
        sum += i % 3;
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += logarithmic(i); // O(log n)
    }

    cout << sum << "\n";
}




