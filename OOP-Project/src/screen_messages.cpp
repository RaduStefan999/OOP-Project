#include "screen_messages.h"

screen_messages::screen_messages() {
    //Constructor
    description = "\nAcesta este proiectul de OOP realizat conform cerintelor, \nde catre elevul Munteanu Catalin din clasa a XI-a D .\n\n\n";
    comenzi = "Funtiile cerute pot fi accesate folosind urmatoarele comenzi :\n\n";

    comanda1 = "-Citeste Lista din fisier : 1\n";
    comanda2 = "-Afiseaza Lista in fisier : 2\n";
    exit = "-Paraseste aplicatia : exit\n\n";

    invitation = "Introduceti comanda (numerica) si argumentu (daca este cazul) >  ";

}


screen_messages::~screen_messages() {
    //Destructor

}
