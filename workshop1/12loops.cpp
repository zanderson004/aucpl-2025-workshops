#include <bits/stdc++.h>
using namespace std;

int main() {
    int x;
    cin >> x;
    cout << "\n";

    for (int i = 0; i < x; i++) {
        cout << i << "\n";
    }

    cout << "\n";

    for (int i = 5; i >= 0; i -= 2) {
        cout << i << "\n";
    }

    cout << "\n";

    int i = 1;
    while (2 * i - 1 != 15) {
        cout << i << "\n";
        i *= 2;
    }
}




