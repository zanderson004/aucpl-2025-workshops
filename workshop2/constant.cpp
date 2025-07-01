#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    for (int i = 0; i < 50; i++) {
        x *= (y % 10);
        x %= 1000;
        if (x == 0) x++;
        y %= x;
    }
    cout << x << "\n";
}




