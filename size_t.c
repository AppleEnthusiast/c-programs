#include <stdio.h>
#include <string.h>

int main(void){
 char name[100];
 size_t len = 0;
 char * p = NULL;

 printf("Enter your name: ");

 
 if(fgets(name, 100, stdin)){
	for(p=name;*p;++p){
		if(*p=='\n'){
			*p = '\0';
			break;
		}
    }
 }
 printf("Length of '%s': %zu",name,strlen(name)); 
 printf("\n");
 return 0;
}

