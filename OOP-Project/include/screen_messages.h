#include <string>

using namespace std;

#ifndef SCREEN_MESSAGES_H
#define SCREEN_MESSAGES_H


class screen_messages {
    public:
        //Constructor
        screen_messages();
        //Destructor
        ~screen_messages();

        //String constants
        string description;
        string comenzi;

        string comanda1;
        string comanda2;
        string exit;

        string invitation;
};

#endif // MESSAGES_H
