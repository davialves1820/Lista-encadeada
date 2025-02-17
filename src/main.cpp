#include "linked_list.h"

int main(void) {
    linked_list list;

    cout << "Lista vazia? " << (list.empty() ? "Sim":"Nao") << endl;

    list.insert_node(1,1);
    list.print_list();

    list.insert_node(1,2);
    list.print_list();
    
    list.insert_node(2,7);
    list.print_list();
    
    cout << "Editando o valor da posicao 1" << endl;
    list.edit_node(1,10);
    list.print_list();

    cout << "Lista vazia? " << (list.empty() ? "Sim":"Nao") << endl;

    cout << "Removendo o elemento da segunda posicao:" << endl;
    list.remove_node(2);
    list.print_list();

    cout << "Valor na posicao 2: " << list.get_value(2) << endl;

    cout << "Tamanho da lista: " << list.get_tam() << endl;

    return 0;
}