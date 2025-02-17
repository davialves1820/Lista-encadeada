#ifndef NODE_H
#define NODE_H

#include <iostream>

using std::cout;
using std::endl;

class node {
    int value; // Vaor armazenado no nó
    node* next; // Aponta para o próximo nó ou para nullptr
public:
    node(int v = 0); // Constroi o nó
    
    // Get e set de next
    void set_next(node* n);
    node* get_next();

    // Get e set de value
    void set_value(int v);
    int get_value();
};

#endif