#include <stdio.h>
#include <string.h>

void greeting(void);

int main(void){

 greeting();
 printf("\n");
 return 0;
}
void greeting(void){
	char name[100];
	int age = 0;
	
	printf("What's your name? ");
	scanf("%s",name);
	
	if(strcmp(name,"Teo") == 0){
		printf("This is a beautiful name.\n");

		printf("How old are you, %s? ",name);	
		scanf("%d",&age);

		printf("This is a beautiful age.\n");

		printf("Your name is %s and you are %d years old.\n",name, age);
		printf("It's great you are here.\n");
	}
	else{
		printf("I don't know you.");
	}


}//end of function greeting
