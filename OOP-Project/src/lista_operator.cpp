#include "lista_operator.h"


ifstream fin ("LISTA.in");
ofstream fout ("LISTA.out");


lista_operator::lista_operator() {
    //Constructor

    primul = NULL;
    ultimul = NULL;
}

lista_operator::lista_operator(const lista_operator &obj) {
    //Copy Constructor

    primul = obj.primul;
    ultimul = obj.ultimul;
}

lista_operator::~lista_operator() {
    //Destructor

    nod *curent = primul;
    nod *todestroy;

    while (curent != NULL) {
        todestroy = curent;
        curent = curent->urm;
        delete(todestroy);
    }
}

lista_operator lista_operator::operator - (const lista_operator& l2) {
    //Operator -
    lista_operator l3;
    nod *curent_l2 = l2.primul;

    while (curent_l2 != NULL) {
        if (!(ispartoflist(curent_l2->data))) {
            nod *curent_l3 = new nod;

            curent_l3->data = curent_l2->data;
            curent_l3->urm = NULL;

            if (!(l3.primul)) {
                l3.primul = curent_l3;
            }
            else {
                l3.ultimul->urm = curent_l3;
            }

            l3.ultimul = curent_l3;
        }

        curent_l2 = curent_l2->urm;
    }

    return l3;
}

lista_operator lista_operator::operator + (const lista_operator& l2) {
    //Operator +
    lista_operator l3;
    nod *curent_l2 = l2.primul;

    while (curent_l2 != NULL) {
        if ((ispartoflist(curent_l2->data))) {
            nod *curent_l3 = new nod;

            curent_l3->data = curent_l2->data;
            curent_l3->urm = NULL;

            if (!(l3.primul)) {
                l3.primul = curent_l3;
            }
            else {
                l3.ultimul->urm = curent_l3;
            }

            l3.ultimul = curent_l3;
        }

        curent_l2 = curent_l2->urm;
    }

    return l3;
}


//Public functions

void lista_operator::inserare_individuala(int x) {
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

void lista_operator::insertpalindrom_list() {
    int x = getmaxim();
    nod *curent = primul;

    while (curent != NULL) {
        if (checkpalindrom(curent->data)) {
            nod *insert_nod = new nod;
            insert_nod->data = x;

            insert_nod->urm = curent->urm;
            curent->urm = insert_nod;
            curent = insert_nod->urm;

            if (curent == ultimul) {
                ultimul = curent;
            }

        }
        else {
            curent = curent->urm;
        }
    }

}

void lista_operator::deleteminim_list() {
    int x = getminim();
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

int lista_operator::aparitiinumar_list(int x) {
    int nr_aparitii = 0;
    nod *curent = primul;

    while (curent != NULL) {
        if (curent->data == x) {
            nr_aparitii++;
        }
        curent = curent->urm;
    }

    return nr_aparitii;
}



//Private functions

int lista_operator::getmaxim() {
    int x = -9999999;
    nod *curent = primul;

    while (curent != NULL) {
        if (curent->data > x) {
            x = curent->data;
        }
        curent = curent->urm;
    }

    return x;
}

int lista_operator::getminim() {
    int x = 9999999;
    nod *curent = primul;

    while (curent != NULL) {
        if (curent->data < x) {
            x = curent->data;
        }
        curent = curent->urm;
    }

    return x;
}

bool lista_operator::checkpalindrom(int x) {
    bool status = 1;

    int dup = x;
    int ogl = 0;

    while (dup != 0) {
        ogl = ogl*10 + dup%10;
        dup = dup/10;
    }

    if (x != ogl) {
        status = 0;
    }

    return status;
}

bool lista_operator::ispartoflist(int x) {
    bool status = 0;
    nod *curent = primul;

    while (curent != NULL) {
        if (curent->data == x) {
            status = 1;
        }
        curent = curent->urm;
    }

    return status;
}
