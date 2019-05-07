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
        //Operator +
        lista_operator operator + (const lista_operator &l2);
        //Operator -
        lista_operator operator - (const lista_operator &l2);

        //Inserare individuala
        void inserare_individuala(int);

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
        //Delete minim from list
        void deleteminim_list();
        //Find number of aparitions from list
        int aparitiinumar_list(int);


    private:
        //Lista
        struct nod {
            int data;
            nod *urm;
        };

        nod  *primul, *ultimul;

        //Help functions
        int getmaxim();
        int getminim();
        bool checkpalindrom(int);
        bool ispartoflist(int);

};

#endif // LISTA_OPERATOR_H
