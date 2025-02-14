#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include "node.h"

class linked_list {
    int tam; // Tamanho atual da lista
    node* head; // Cabeça da lista

    // Funções de adicionar um nó no começo, no meio e no fim da lista respectivamente
    void insert_begin(int value);
    void insert_midle(int pos, int value);
    void insert_end(int value);
public:
    linked_list(); // Inicializa a lista

    bool empty(); // Verifica se a lista está vazia
    
    int get_tam(); // Retorna o tamanho da lista
    
    void insert_node(int pos, int value); // Insere um novo nó na lista
    
    void remove_node(int pos); // Remove um nó da lista
    
    int get_value(int pos); // Retorna o valor de um nó
    
    void edit_node(int pos, int value); // Altera o valor de um nó na lista
    
    void print_list(); // Exibe a lista
    
    ~linked_list(); // Desaloca a memória
}; 

#endif