#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int res = INT_MAX;
    int x;
    
    for (int i = 0; i < n; i++) {
        cin >> x;
        res = min(res, x);
    }

    cout << res << "\n";
}




