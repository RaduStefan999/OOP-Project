#include <iostream>
#include <cstring>
#include <stdlib.h>

#include <lista_operator.h>
#include <screen_messages.h>

#define NMAX 255

using namespace std;

void menu_display ();
void menu_action ();

int get_integer (char *c);

void apelare_supraincarcare1();
void apelare_supraincarcare2();

lista_operator listmanager;
screen_messages menu;

char input[NMAX + 10];

int main()
{
    menu_display();
    menu_action();

    return 0;
}

void menu_display () {

    //schimb culoarea
    system("COLOR 1F");

    cout << menu.description;
    cout << menu.comenzi;

    cout << menu.comanda1;
    cout << menu.comanda2;
    cout << menu.comanda3;
    cout << menu.comanda4;
    cout << menu.comanda5;
    cout << menu.comanda6;
    cout << menu.comanda7;
    cout << menu.comanda8;
    cout << menu.comanda9;

    cout << menu.exit;
}

void menu_action () {
    cout << menu.invitation;
    while (cin.getline(input, NMAX)) {
        int functie = 0;
        int argument = 0;

        if (strlen(input) > 0) {
            char *fn = strtok(input, " ");
            char *arg = strtok(NULL, " ");

            if (strcmp(fn, "exit") == 0) {
                return;
            }
            else {
                functie = get_integer(fn);
                argument = get_integer(arg);

                if (functie == 1) {
                    listmanager.read_list();
                }
                else {
                    if (functie == 2) {
                        listmanager.output_list();
                    }
                    else {
                        if (functie == 3) {
                            listmanager.deletefrom_list(argument);
                        }
                        else {
                            if (functie == 4) {
                                listmanager.insertpar_list(argument);
                            }
                            else {
                                if (functie == 5) {
                                    listmanager.insertpalindrom_list();
                                }
                                else {
                                    if (functie == 6) {
                                        listmanager.deleteminim_list();
                                    }
                                    else {
                                        if (functie == 7) {
                                            cout << menu.returnmesage << listmanager.aparitiinumar_list(argument) << '\n';
                                        }
                                        else {
                                            if (functie == 8) {
                                                apelare_supraincarcare1();
                                            }
                                            else {
                                                if (functie == 9) {
                                                    apelare_supraincarcare2();
                                                }
                                                else {
                                                    cout << menu.necunoscut;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }

        if (functie != 8 && functie != 9) {
            cout << menu.invitation;
        }

    }
}

int get_integer (char *c) {
    int x = 0;

    if (c == NULL) {
        return 0;
    }

    for (int i = 0; i < strlen(c); i++) {
        if (isdigit(c[i])) {
            x = x*10 + int(c[i] - '0');
        }
        else {
            return 0;
        }
    }

    return x;
}

void apelare_supraincarcare1() {
    int n = 0, a = 0;

    lista_operator l2, l3;

    cout << menu.lista1;
    cin >> n;
    cout << menu.lista2;

    for (int i = 1;i <= n; i++) {
        cin >> a;
        l2.inserare_individuala(a);

        l3 = listmanager + l2;
        l3.output_list();
    }
}

void apelare_supraincarcare2() {
    int n = 0, a = 0;

    lista_operator l2, l3;

    cout << menu.lista1;
    cin >> n;
    cout << menu.lista2;

    for (int i = 1;i <= n; i++) {
        cin >> a;
        l2.inserare_individuala(a);

        l3 = listmanager - l2;
        l3.output_list();
    }
}
