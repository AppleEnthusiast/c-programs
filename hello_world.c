/*
Die include-Anweisung dient dazu, Funktionen aus anderen Bibliotheken
nutzbar zu machen. Über die Header-Datei stdio.h erreicht man eine
Bibliothek mit Standardfunktionen für die Ein- und Ausgabe, darunter auch 
die Funktion printf.
*/

#include <stdio.h>
#include <string.h>

int main(void) {

 char name[10] = "Teo";

 printf("Hello, World!\n");
 printf("Hello, %s!. Nice to see you. You are a wonderful guy.", name);

 printf("\n");
 return 0;
}
