#include <bits/stdc++.h>
using namespace std;

void printVector(vector<int>& aVector) {
    for (int i : aVector) {
        cout << i << " ";
    }
    cout << "\n";
}

void printVector2(vector<int>& aVector) {
    for (int i = 0; i < aVector.size(); i++) {
        cout << aVector[i] << " ";
    }
    cout << "\n";
}

int main() {
    vector<int> myVector;
    for (int i = 0; i < 3; i++) {
        myVector.push_back(i);
    }

    printVector(myVector);

    vector<int> myNewVector(5, 3);
    
    printVector2(myNewVector);
}




