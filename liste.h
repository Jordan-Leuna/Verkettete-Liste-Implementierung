#ifndef LISTE_H
#define LISTE_H

#include "listenElement.h"

//Deklaration der Zeiger auf das erste und letzte Listenelement
extern listenElement* erste;
extern listenElement* letzte;


// Deklaration der Funktionen zum Erstellen und Verwalten der Liste
void erstelleListe();
void neuesElement(telefonNummer _nummer);
void listeAusgeben();
void loescheListe();

#endif
