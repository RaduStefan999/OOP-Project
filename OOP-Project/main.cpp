#include <iostream>
#include <cstring>

#include <lista_operator.h>
#include <screen_messages.h>

#define NMAX 255

using namespace std;

void menu_display ();
void menu_action ();

int get_integer (char *c);

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
    cout << menu.description;
    cout << menu.comenzi;

    cout << menu.comanda1;
    cout << menu.comanda2;
    cout << menu.comanda3;
    cout << menu.comanda4;
    cout << menu.comanda5;
    cout << menu.comanda6;
    cout << menu.comanda7;

    cout << menu.exit;
}

void menu_action () {
    cout << menu.invitation;
    while (cin.getline(input, NMAX)) {
        if (strlen(input) > 0) {
            char *fn = strtok(input, " ");
            char *arg = strtok(NULL, " ");

            if (strcmp(fn, "exit") == 0) {
                return;
            }
            else {
                int functie = get_integer(fn);
                int argument = get_integer(arg);

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
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        cout << menu.invitation;
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
