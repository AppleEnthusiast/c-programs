#include <stdio.h>

int main(void){

 // Die Deklaration dient dazu, einer Variablen einen Namen zu geben
 // und sie einem Dateityp zuzuordnen

 int anzahl;
 double preis;

 printf("Anzahl eingeben: ");
 scanf("%d", &anzahl);

 printf("Preis eingeben: ");
 scanf("%lf", &preis);
 
 printf("\nAnzahl: %d\n", anzahl);
 printf("Preis: %.2f Euro\n", preis);
 printf("Total: %.2f Euro\n", anzahl * preis);

 printf("\n");
 return 0;
}
