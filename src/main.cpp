#include "linked_list.h"

int main(void) {
    linked_list list;

    std::cout << "Lista vazia? " << (list.empty() ? "Sim":"Nao") << std::endl;

    list.insert_node(1,1);
    list.print_list();

    list.insert_node(1,2);
    list.print_list();
    
    list.insert_node(2,7);
    list.print_list();
    
    std::cout << "Editando o valor da posicao 1" << std::endl;
    list.edit_node(1,10);
    list.print_list();

    std::cout << "Lista vazia? " << (list.empty() ? "Sim":"Nao") << std::endl;

    std::cout << "Removendo o elemento da segunda posicao:" << std::endl;
    list.remove_node(2);
    list.print_list();

    std::cout << "Valor na posicao 2: " << list.get_value(2) << std::endl;

    std::cout << "Tamanho da lista: " << list.get_tam() << std::endl;

    return 0;
}