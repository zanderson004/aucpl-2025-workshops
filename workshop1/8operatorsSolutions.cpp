#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, y, z;
    cin >> x >> y >> z;

    int res = -x + x * y + (z - (y % x));
    cout << res << "\n";
}




