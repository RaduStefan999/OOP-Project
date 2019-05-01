#include "lista_operator.h"


ifstream fin ("LISTA.in");
ofstream fout ("LISTA.out");


lista_operator::lista_operator()
{
    //Constructor

    primul.urm = NULL;
    ultimul.urm = NULL;
}

lista_operator::lista_operator(const lista_operator &obj)
{
    //Copy Constructor

    primul = obj.primul;
    ultimul = obj.ultimul;
}

lista_operator::~lista_operator()
{
    //Destructor
}
