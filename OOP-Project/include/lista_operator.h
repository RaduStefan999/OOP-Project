#include <fstream>

using namespace std;

#ifndef LISTA_OPERATOR_H
#define LISTA_OPERATOR_H

class lista_operator {

    public:
        //Constructor
        lista_operator();
        //Copy Constructor
        lista_operator(const lista_operator &obj);
        //Destructor
        ~lista_operator();




    private:
        //Lista
        struct nod {
            int data;
            nod *urm;
        };

        nod primul, ultimul;

};

#endif // LISTA_OPERATOR_H
