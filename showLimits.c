#include <stdio.h>
#include <limits.h>

void showMenu();

int main(void){
 showMenu();
 printf("\n");
 return 0;
}
void showMenu(){
	printf("This program shows you the limit of numbers.\n");
	printf("The limits of which data type do you want to see?\n");
	printf("-------------------------------------------------\n");	
	printf("(a) short\n");	
	printf("(b) int\n");	
	printf("(c) long\n");	
	printf("-------------------------------------------------\n");	
}
