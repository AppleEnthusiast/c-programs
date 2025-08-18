#include <stdio.h>

int main(void){

 int age = 0;

 printf("Wie alt bist du? ");
 scanf("%d", &age);

 if(age >= 18)
	printf("Du bist erwachsen.");
 else
	printf("Du bist noch nicht erwachsen.\nDas kommt noch. Früher oder später.");

 printf("\n");
 return 0;
}
