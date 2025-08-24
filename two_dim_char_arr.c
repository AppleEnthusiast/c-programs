#include <stdio.h>

#define MAX 3

int main(void) {
 
 char names[3][50];

 printf("type three names:\n");

 int i = 0;
 char * p = NULL;

 for(i=0;i<MAX;i++) {
	printf("%d. name: ",i+1);
	if(fgets(names[i], sizeof names[i],stdin)){
		for(p = names[i];*p;++p){
			if(*p == '\n'){
				*p = '\0';
				break;
			}
		}	
	}
 }

 printf("the names you gave as input:\n");

 for(i=0;i<MAX;i++) {
	printf("%s\n",names[i]);
 }

 printf("\n");
 return 0;
}
