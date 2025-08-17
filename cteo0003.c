#include <stdio.h>

int main(void){

 int age = 0;

 printf("Wie alt bist du? ");
 scanf("%d", &age);

 if(age >= 18)
	printf("Du bist erwachsen.");

 printf("\n");
 return 0;
}
