#include <iostream>

using namespace std;

/**
 * Stivele sunt niste date structurate in asa fel incat primul care este in varf va fii primul eliminat
 * Se mai numeste si LIFO(last in first out)
 */

int limita = 10;

void adaugaElement(int stiva[], int &k, int valoare) {
    stiva[k+1] = valoare;
    k +=1;
}

void afiseazaElementele(int stiva[], int &k) {
    while (k != 0) {
        cout<<stiva[k]<<endl;
        k -= 1;
    }
}

int pop(int *stiva, int &k) {
    int elementSters = stiva[k-1];
    k-=1;
    return elementSters;
}

int main() {
   int stiva[limita];
   int k = 0;
    adaugaElement(stiva, k, 1);
    adaugaElement(stiva, k, 2);
    adaugaElement(stiva, k, 3);
    adaugaElement(stiva, k, 4);
    afiseazaElementele(stiva, k);
    k = 5;
    cout<<"Stergem elemente din stiva: "<<pop(stiva, k)<<endl;
    cout<<"Stergem elemente din stiva: "<<pop(stiva, k)<<endl;
    cout<<"Stergem elemente din stiva: "<<pop(stiva, k)<<endl;
    return 0;
}
