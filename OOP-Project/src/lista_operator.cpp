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

void lista_operator::deletefrom_list(int x) {
    nod *curent = primul;
    nod *predecesor;
    while (curent != NULL) {

        if (curent->data == x) {
            if (curent == primul) {
                curent = curent->urm;
                delete(primul);
                primul = curent;
            }
            else {
                if (curent == ultimul) {
                    predecesor->urm = NULL;
                    delete(ultimul);
                    ultimul = predecesor;
                    curent = ultimul;
                }
                else {
                    predecesor->urm = curent->urm;
                    delete(curent);
                    curent = predecesor->urm;
                }
            }
        }
        else {
            predecesor = curent;
            curent = curent->urm;
        }


    }
}

void lista_operator::insertpar_list(int x) {
    nod *curent = primul;

    while (curent != NULL) {
        if (curent->data%2 == 0) {
            nod *insert_nod = new nod;
            insert_nod->data = x;

            insert_nod->urm = curent->urm;
            curent->urm = insert_nod;
            curent = insert_nod;

            if (curent == ultimul) {
                ultimul = curent;
            }

        }
        else {
            curent = curent->urm;
        }
    }

}
