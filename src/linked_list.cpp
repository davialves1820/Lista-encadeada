#include "linked_list.h"

// Inicializa a lista
linked_list::linked_list() : tam(0), head(nullptr) {
    cout << "Lista criada." << endl;
}

// Verifica se a lista está vazia
bool linked_list::empty() {
    return tam == 0;
}

// Retorna o tamanho
int linked_list::get_tam() {
    return tam;
}

// Insere um novo nó em uma posição indicada
void linked_list::insert_node(int pos, int value) {
    // Verifica se o usuário quer adicionar na lista vazia uma posição diferente da primeira
    if (empty() && pos != 1) {
        return;
    }

    // Verifica se a posição é válida
    if (pos < 1 || pos > tam + 1) {
        return;
    }

    if (pos == 1) {
        insert_begin(value);
    } else if (pos == tam + 1) {
        insert_end(value);
    } else {
        insert_midle(pos, value);
    }
    cout << "Valor " << value << " adicionado na posicao " << pos << "." << endl;
}

// Insere o elemento na primeira posição
void linked_list::insert_begin(int value) {
    node* n = new node(value);
    n->set_next(head);
    head = n;
    tam++;
}

// Insere o elemento no meio da lista
void linked_list::insert_midle(int pos, int value) {
    int i = 0;
    node* n = new node(value);
    node* next = head;

    while (i + 2 < pos && next != nullptr) {
        i++;
        next = next->get_next();
    }

    if (next != nullptr) {
        n->set_next(next->get_next());
        next->set_next(n);
        tam++;
    }
}

// Insere o elemento na última posição
void linked_list::insert_end(int value) {
    node* n = new node(value);
    node* aux = head;
    
    while (aux->get_next() != nullptr) {
        aux = aux->get_next();
    }
    aux->set_next(n);
    tam++;
}

// Remove uma determinada posição
void linked_list::remove_node(int pos) {
    // Verifica se a posição é válida
    if (empty() || pos < 1 || pos > tam) {
        return;
    }

    node* ant = nullptr;
    node* prox = head;
    int i = 0;
    while (prox != nullptr && i != pos - 1) {
        ant = prox;
        prox = prox->get_next();
        i++;
    }
    // Remove a posição da lista e desaloca o espaço de memória daquela posição
    if (ant == nullptr) {
        head = head->get_next();
    }  else {
        ant->set_next(prox->get_next());
    }
    delete prox;
    tam--;
}

// Altera o valor de uma determinada posição
void linked_list::edit_node(int pos, int value) {
    // Verifica se a posição é válida
    if (empty() || pos < 1 || pos > tam) {
        return;
    }

    int i = 0;
    node* aux = head;
    while (aux != nullptr && i != pos - 1) {
        aux = aux->get_next();
        i++;
    }
    aux->set_value(value);
}

// Retorna o valor de uma determinada posição
int linked_list::get_value(int pos) {
    if (empty() || pos < 1 || pos > tam) {
        return -1;
    }

    int i = 0;
    node* aux = head;

    while (aux != nullptr && i != pos - 1) {
        aux = aux->get_next();
        i++;
    }

    return aux->get_value();
}

// Exibe a lista
void linked_list::print_list() {
    node* aux = head;
    cout << "Lista: ";
    while (aux != nullptr) {
        std::cout << aux->get_value() << " ";
        aux = aux->get_next();
    }
    std::cout << std::endl;
}

// Desaloca toda a memória dos nós
linked_list::~linked_list() {
    // Desaloca o espaço de memória
    while (head != nullptr) {
        node* d = head;
        head = head->get_next();
        delete d;
    }
    cout << "Memoria desalocada." << endl;
}

