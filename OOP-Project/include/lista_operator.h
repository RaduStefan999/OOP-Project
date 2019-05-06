#include <fstream>
#include <iostream>

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

        //Read_list
        void read_list();
        //Output_list
        void output_list();
        //Delete from list
        void deletefrom_list(int);
        //Insert after par from list
        void insertpar_list(int);
        //Insert after palindrom from list
        void insertpalindrom_list();




    private:
        //Lista
        struct nod {
            int data;
            nod *urm;
        };

        nod  *primul, *ultimul;

        //Help functions
        int getmaxim();
        bool checkpalindrom(int);

};

#endif // LISTA_OPERATOR_H
