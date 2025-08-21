#include <stdio.h>

#define MAX 3

int main(void) {
 
 char names[3][50];

 printf("type three names:\n");

 int i = 0;

 for(i=0;i<MAX;i++) {
	printf("%d. name: ",i+1);
	scanf("%s",names[i]);
 }

 printf("the names you gave as input:\n");

 for(i=0;i<MAX;i++) {
	printf("%s\n",names[i]);
 }

 printf("\n");
 return 0;
}
