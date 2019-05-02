#include "lista_operator.h"


ifstream fin ("LISTA.in");
ofstream fout ("LISTA.out");


lista_operator::lista_operator() {
    //Constructor
}

lista_operator::lista_operator(const lista_operator &obj) {
    //Copy Constructor

    primul = obj.primul;
    ultimul = obj.ultimul;
}

lista_operator::~lista_operator() {
    //Destructor
}

void lista_operator::read_list() {
    int x = 0;
    while (fin >> x) {
        nod *curent = new nod;

        curent->data = x;
        curent->urm = NULL;

        if (!primul) {
            primul = curent;
        }
        else {
            ultimul->urm = curent;
        }

        ultimul = curent;
    }
}

void lista_operator::output_list() {
    int x = 0;
    nod *curent = primul;

    while (curent != NULL) {
        fout << curent->data << " ";
        curent = curent->urm;
    }
}
