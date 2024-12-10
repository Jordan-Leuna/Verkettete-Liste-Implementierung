#ifndef LISTENELEMENT_H
#define LISTENELEMENT_H

// Definition eines Typalias für telefonNummer
typedef long telefonNummer;  // telefonNummer wird als Alias für long definiert

// Definition des Listenelements
struct listenElement {
    telefonNummer nummer;          // Die Telefonnummer als telefonNummer
    listenElement* next;            // Zeiger auf das nächste Listenelement
};

#endif
