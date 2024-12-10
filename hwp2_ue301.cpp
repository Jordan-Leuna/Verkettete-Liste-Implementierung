#include <iostream>
#include "liste.h"

int main() {
    std::string eingabe;
    telefonNummer telefonNummer;  // Nutzung des neuen Typs telefonNummer

    erstelleListe();  // Liste erstellen

    while (true) {
        std::cout << "Bitte geben Sie eine Telefonnummer ein (oder '#' zum Beenden): ";
        std::getline(std::cin, eingabe);

        if (eingabe == "#") {
            break;  // Schleife beenden, wenn '#' eingegeben wird
        }

        try {
            telefonNummer = std::stol(eingabe);  // Umwandeln der Eingabe in eine telefonNummer (long)
            neuesElement(telefonNummer);  // Neues Element in die Liste einfügen
        } catch (const std::invalid_argument&) {
            std::cout << "Ungültige Eingabe. Bitte geben Sie eine gültige Telefonnummer ein.\n";
        }
    }

    // Liste ausgeben
    listeAusgeben();

    // Liste löschen
    loescheListe();

    // Überprüfen, ob die Liste leer ist
    if (erste == nullptr) {
        std::cout << "Die Liste ist jetzt leer.\n";
    }

    return 0;
}
