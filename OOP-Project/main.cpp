#include <iostream>
#include <cstring>

#include <lista_operator.h>
#include <screen_messages.h>

#define NMAX 255

using namespace std;

void menu_display ();
void menu_action ();

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
                if (strcmp(fn, "1") == 0) {
                    listmanager.read_list();
                }
                else {
                    if (strcmp(fn, "2") == 0) {
                        listmanager.output_list();
                    }
                }
            }
        }
        cout << menu.invitation;
    }
}
