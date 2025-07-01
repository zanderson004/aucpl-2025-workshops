#include <bits/stdc++.h>
using namespace std;

int main() {
    string x = "x";
    string y = "y";

    string myString = x + y;
    int sum = 4 + 9;
    int difference = 7 - 2;
    int product = 3 * 5;
    int remainder = 28 % 5;

    bool _or = true || false;
    bool _and = true && false;

    // 101 | 011
    int bitwiseOr = 5 | 3;
    // 101 & 011
    int bitwiseAnd = 5 & 3;
    // 101 ^ 011
    int bitwiseXor = 5 ^ 3;
    // ~ 101
    int bitwiseNot = ~5;

    cout << myString << "\n" << sum << "\n" << difference << "\n" << product << "\n" << remainder << "\n\n";
    cout << _or << "\n" << _and << "\n\n";
    cout << bitwiseOr << "\n" << bitwiseAnd << "\n" << bitwiseXor << "\n" << bitwiseNot << "\n";
}




