#include <iostream>
#include <string>
#include <stdlib.h>

#ifndef ZOOPROJECT_MENU_H
#define ZOOPROJECT_MENU_H


using namespace ::std;

class menu {
    int m_roomCount; // Po�et map/m�stnost�
    int m_roomSize;  // Velikost m�stnosti

public:
    menu() {} // Konstruktor

    bool validInput(string input) {
    };

    void inicialise() {     // Funkce si �ekne o zad�n� z�kladn�ch hodnot

    };

    int getRoomCount() {};

    int getRoomSize() {};
    void printTitle() {};
};

#endif //ZOOPROJECT_MENU_H