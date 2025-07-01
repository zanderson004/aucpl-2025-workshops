#include <bits/stdc++.h>
using namespace std;

int addOne(int x) {
    x += 1;
    return x;
}

int addOneAlternative(int& x) {
    x += 1;
    return x;
}

int main() {
    int x = 5;
    int y = addOne(x);

    cout << x << " " << y << "\n";

    y = addOneAlternative(x);
    cout << x << " " << y << "\n";
}




