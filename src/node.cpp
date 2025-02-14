#include "node.h"

node::node(int v) : value(v), next(nullptr) {}

void node::set_next(node* n) {
    next = n;
}

node* node::get_next() {
    return next;
}

void node::set_value(int v) {
    value = v;
}

int node::get_value() {
    return value;
}