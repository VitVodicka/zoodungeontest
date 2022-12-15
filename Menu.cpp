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

void menu::inicialise() {     // Funkce si øekne o zadání základních hodnot
    string input;         // String pojme input, nakonci se pøevede na int
    bool opakovat = true; // Pomocný bool pro opakování cyklù
    cout << "Zadejte požadovaný poèet místností." << endl << flush;
    while (opakovat) {
        cin >> input;
        if (validInput(input)) {     // Kontrola, zda se jedná o celé èíslo
            m_roomCount = stoi(input); // Pøevod stringu na int
            opakovat = false;          // Ukonèení cyklu díky pomocnému boolu :3
        }
        else {
            cout << "Neplatná hodnota!" << endl << flush;
        }
    }
    opakovat = true;
    input = "";
    cout << "Zadejte lichou velikost jednotlivých místnostív intervalu <5;15>."
        << endl << flush;
    while (opakovat) {
        cin >> input;
        if (validInput(input) && stoi(input) >= 5 && stoi(input) <= 15 &&
            stoi(input) % 2 == 1) { // Kontrola podmínek
            m_roomSize = stoi(input);
            opakovat = false;
        }
        else {
            cout << "Neplatná hodnota!" << endl << flush;
        }
    }
}

int menu::getRoomCount() { return m_roomCount; }

int menu::getRoomSize() { return m_roomSize; }


void menu::printTitle() { // Bude cenit, jméno hry kdyžtak potom zmìníme
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