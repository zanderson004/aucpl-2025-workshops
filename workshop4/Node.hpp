#ifndef NODE_HPP
#define NODE_HPP

#include <vector>

using namespace std;

struct Node {
    int value;
    vector<Node*> next;
};

#endif

