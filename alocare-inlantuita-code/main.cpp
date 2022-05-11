#include <iostream>

using namespace std;

/**
 * Structura de date inlantuita datele nu sunt memorate una langa alta, deci pentru a rezolva acest lucru exista conceputul de Nod
 * Un Nod tine cont de valoarea respectiva plu un pointer catre urmatorul element
 */

struct Nod {
    int value;
    Nod* next;
};

void adaugaElement(Nod* &head, int value) {
    Nod* newElement = new Nod;
    newElement -> value = value;
    newElement -> next = head;
    head = newElement;
}

void afisareElemente(Nod* head) {
    cout<<"Afisare elemente"<<endl;
    while (head != NULL) {
        cout<<head ->value<<endl;
        head = head -> next;
    }
}

void pop(Nod* head) {
    Nod* variabilaTemporara = head -> next;
    head -> next = head -> next -> next;
    delete variabilaTemporara;
}

int main() {
    Nod* head = NULL;

    adaugaElement(head, 2);
    adaugaElement(head, 4);
    adaugaElement(head, 6);
    adaugaElement(head, 8);
    afisareElemente(head);
    pop(head);
    afisareElemente(head);

    return 0;
}
