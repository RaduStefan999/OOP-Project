#include "screen_messages.h"

screen_messages::screen_messages() {
    //Constructor
    description = "\nAcesta este proiectul de OOP realizat conform cerintelor, \nde catre elevul Munteanu Catalin din clasa a XI-a D .\n\n\n";
    comenzi = "Funtiile cerute pot fi accesate folosind urmatoarele comenzi :\n\n";

    comanda1 = "-Citeste Lista din fisier : 1\n";
    comanda2 = "-Afiseaza Lista in fisier : 2\n";
    comanda3 = "-Elimina un numar dat din Lista : 3 numar\n";
    comanda4 = "-Inserarea unui numar dat dupa fiecare element par din Lista : 4 numar\n";
    comanda5 = "-Inserarea maximului dupa fiecare element palindrom din Lista : 5\n";
    comanda6 = "-Eliminarea minimului din Lista : 6\n";
    comanda7 = "-Determina numarul de aparitii al unui numar dat din Lista : 7 numar\n";
    comanda8 = "-Creearea unei noi liste, obtinuta prin eliminarea din l2 l1 prin supraincarcarea operatorului -, \nl1 se citeste prin comanda 1, l2 se va citi de la ecran, lista creata va fi afisata in fisier : 8\n";
    comanda9 = "-Creearea unei noi liste, obtinuta din elementele comune listelor l2 l1 prin supraincarcarea operatorului +, \nl1 se citeste prin comanda 1, l2 se va citi de la ecran, lista creata va fi afisata in fisier : 9\n";

    returnmesage = "Aplicatia intoarce : ";
    exit = "-Paraseste aplicatia : exit\n\n";

    invitation = "Introduceti comanda (numerica) si argumentul (daca este cazul) >  ";
    necunoscut = "Comanda nu a fost recunoscuta de aplicatie\n";

    lista1 = "Introduceti lungimea listei l2\n";
    lista2 = "Introduceti elementele listei l2\n";

}


screen_messages::~screen_messages() {
    //Destructor

}
