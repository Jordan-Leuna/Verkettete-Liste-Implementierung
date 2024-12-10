#include <iostream>
#include "liste.h"

// Zeiger auf das erste und letzte Element der Liste
listenElement* erste = nullptr;
listenElement* letzte = nullptr;

// Funktion zum Erstellen einer Liste
void erstelleListe() {
    erste = new listenElement;    
    erste->nummer = 0;            
    erste->next = nullptr;      
    letzte = erste;               
    std::cout << "Liste erstellt.\n";
}

// Funktion zum Hinzufügen eines neuen Elements
void neuesElement(telefonNummer _nummer) {
    listenElement* neues = new listenElement;  // Neues Listenelement erstellen
    neues->nummer = _nummer;                   // Telefonnummer setzen
    neues->next = nullptr;                     // Das neue Element zeigt auf nichts

    if (letzte != nullptr) {
        letzte->next = neues;  // Das letzte Element zeigt auf das neue Element
        letzte = neues;        // Das neue Element wird nun das letzte Element
    }
}

// Funktion zum Ausgeben der gesamten Liste
void listeAusgeben() {
    if (erste == nullptr || erste->next == nullptr) {
        std::cout << "Die Liste ist leer.\n";
        return;
    }

    listenElement* current = erste->next; // Der erste Knoten enthält nur 0 und zeigt auf das erste echte Element
    while (current != nullptr) {
        std::cout << "Telefonnummer: " << current->nummer << std::endl;
        current = current->next;
    }
}

// Funktion zum Löschen der Liste
void loescheListe() {
    listenElement* current = erste;  // Starten beim ersten Element
    listenElement* temp;

    while (current != nullptr) {
        temp = current;              // Aktuelles Element sichern
        current = current->next;     // Zum nächsten Element weitergehen
        delete temp;                 // Aktuelles Element löschen
    }

    erste = nullptr;  // Die Liste ist jetzt leer
    letzte = nullptr;
    std::cout << "Die Liste wurde gelöscht.\n";
}
