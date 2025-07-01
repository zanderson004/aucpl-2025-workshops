#include <bits/stdc++.h>
using namespace std;

void repeatString(string& s) {
    s = s + s;
}

int main() {
    string s = "test";
    repeatString(s);
    cout << s << "\n";
}




