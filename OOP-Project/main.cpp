#include <iostream>

#include <lista_operator.h>
#include <screen_messages.h>

using namespace std;

void menu_display ();
void menu_action ();

screen_messages menu;

int main()
{
    menu_display();
    menu_action();

    return 0;
}

void menu_display () {
    cout << menu.text1;
}

void menu_action () {

}
