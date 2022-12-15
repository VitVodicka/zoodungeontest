#include "Menu.h"

using namespace ::std;

bool menu::validInput(string input) {
    bool isNeg = false;
    int itr = 0;
    if (input.size() == 0)
        return false;
    if (input[0] == '-') {
        return false;
    }
    for (int i = itr; i < input.size(); i++) {
        if (!isdigit(input[i]))
            return false;
    }
    return true;
}

void menu::inicialise() {     // Funkce si �ekne o zad�n� z�kladn�ch hodnot
    string input;         // String pojme input, nakonci se p�evede na int
    bool opakovat = true; // Pomocn� bool pro opakov�n� cykl�
    cout << "Zadejte po�adovan� po�et m�stnost�." << endl << flush;
    while (opakovat) {
        cin >> input;
        if (validInput(input)) {     // Kontrola, zda se jedn� o cel� ��slo
            m_roomCount = stoi(input); // P�evod stringu na int
            opakovat = false;          // Ukon�en� cyklu d�ky pomocn�mu boolu :3
        }
        else {
            cout << "Neplatn� hodnota!" << endl << flush;
        }
    }
    opakovat = true;
    input = "";
    cout << "Zadejte lichou velikost jednotliv�ch m�stnost�v intervalu <5;15>."
        << endl << flush;
    while (opakovat) {
        cin >> input;
        if (validInput(input) && stoi(input) >= 5 && stoi(input) <= 15 &&
            stoi(input) % 2 == 1) { // Kontrola podm�nek
            m_roomSize = stoi(input);
            opakovat = false;
        }
        else {
            cout << "Neplatn� hodnota!" << endl << flush;
        }
    }
}

int menu::getRoomCount() { return m_roomCount; }

int menu::getRoomSize() { return m_roomSize; }


void menu::printTitle() { // Bude cenit, jm�no hry kdy�tak potom zm�n�me
    std::cout << R"( 
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
*    __ __       __          __ __        __         __ __          *
*   / // ___ ___/ ___ ___   / // __ _____/ /____ _  / // _______ _  *
*  / _  / _ / _  / _ / -_) / _  / // (_-/ __/ _ `/ / _  / __/ _ `/  *
* /_//_/\___\_,_/_//_\__/ /_//_/\_,_/___\__/\_,_/ /_//_/_/  \_,_/   *
*                                                                   *
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
  )" << '\n';
}