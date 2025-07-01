#include <bits/stdc++.h>
using namespace std;

int main() {
    int x;
    cin >> x;

    if (x > 10) {
        cout << "x is greater than 10\n";
    } else if (x >= 0) {
        cout << "x is greater than or equal to 0 but not greater than 10\n";
    } else {
        cout << "x is less than 0\n";
    }
}




