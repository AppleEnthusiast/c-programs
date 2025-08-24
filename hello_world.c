/*
Die include-Anweisung dient dazu, Funktionen aus anderen Bibliotheken
nutzbar zu machen. Über die Header-Datei stdio.h erreicht man eine
Bibliothek mit Standardfunktionen für die Ein- und Ausgabe, darunter auch 
die Funktion printf.
*/

#include <stdio.h>

int main(void) {

 char name[10];

 printf("Hello, World!\n");

 printf("Enter your name: ");

 if (fgets(name, sizeof name, stdin)) {
	// Zeilenumbruch entfernen, falls vorhanden
    for (char *p = name; *p; ++p) {
		if (*p == '\n'){ 
			*p = '\0'; 
			break; 
		}
	}
 }

 printf("Hello, %s! Nice to see you.\nYou are a wonderful guy.\n", name);
 printf("Hello, %s! Nice to see you. You are a wonderful guy.", name);

 printf("\n");
 return 0;
}

