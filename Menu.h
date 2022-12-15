#include <iostream>
#include <string>
#include <stdlib.h>

#ifndef ZOOPROJECT_MENU_H
#define ZOOPROJECT_MENU_H


using namespace ::std;

class menu {
    int m_roomCount; // Poèet map/místností
    int m_roomSize;  // Velikost místnosti

public:
    menu() {} // Konstruktor

    bool validInput(string input) {
    };

    void inicialise() {     // Funkce si øekne o zadání základních hodnot

    };

    int getRoomCount() {};

    int getRoomSize() {};
    void printTitle() {};
};

#endif //ZOOPROJECT_MENU_H