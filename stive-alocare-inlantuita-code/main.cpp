#include <iostream>

using namespace std;

/**
 * Structura de date inlantuita datele nu sunt memorate una langa alta, deci pentru a rezolva acest lucru exista conceputul de Nod
 * Un Nod tine cont de valoarea respectiva plus un pointer catre urmatorul element
 * Dar in acest caz findca avem Stiva, pointerul va tine cont de elementul anterior in Stiva
 */

struct Nod {
    int value;
    Nod* prev;
};

void push(Nod* &head, int value) {
    Nod* currentElement = new Nod();
    currentElement ->value = value;
    currentElement ->prev = head;
    head = currentElement;
}

// va sterge primul element di varful stivei
int pop(Nod* &head) {
    Nod* elementSters = head;
    head = head -> prev; // setam headul la elementul precedent
    int rezultat = elementSters ->value;
    delete elementSters;
    return rezultat;
}

void afisceazaElementeStiva(Nod* head) {
    while (head != NULL) {
        cout<<head->value<<endl;
        head = head -> prev;
    }
}

int main() {
    Nod* head = NULL;
    push(head, 2);
    push(head, 4);
    push(head, 6);
    push(head, 8);
    push(head, 10);
    afisceazaElementeStiva(head);
    cout<<"Element sters din stiva: "<<pop(head)<<endl;
    cout<<"Element sters din stiva: "<<pop(head)<<endl;
    cout<<"Element sters din stiva: "<<pop(head)<<endl;
    return 0;
}
