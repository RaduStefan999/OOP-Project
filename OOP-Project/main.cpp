#include <iostream>
#include <cstring>

#include <lista_operator.h>
#include <screen_messages.h>

#define NMAX 255

using namespace std;

void menu_display ();
void menu_action ();

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
}

void menu_action () {
    cout << menu.invitation;
    while (cin.getline(input, NMAX)) {
        cout << menu.invitation;
    }
}
