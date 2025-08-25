#include <stdio.h>

int main(void){
 
 char name[] = "Teo";
 
 // 4
 printf("%lu", sizeof name);

 char * p = NULL;
 for(p=name;*p;++p)
	printf("%3c",*p);

 printf("\n");
 return 0;
}

