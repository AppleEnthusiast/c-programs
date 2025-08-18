#include <stdio.h>

int main(void){

 int age = 0;

 printf("Wie alt bist du? ");
 scanf("%d", &age);

 for(int i = 1; i<=age;i++){
	printf("*");
	if(i % 10 == 0)
		printf("\n");
 }
 printf("\n");
 return 0;
}
