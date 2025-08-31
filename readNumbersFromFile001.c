#include <stdio.h>
#include <string.h>

#define MAX 3

int main(void){
 FILE * fp = NULL;

 fp = fopen("temp","r");
 if(fp == NULL){
	printf("File Error\n");
	return 1;
 }
 
 double myNumbers[MAX];

 int i = 0;
 for(i=0;i<MAX;++i){
	fscanf(fp,"%lf",&myNumbers[i]);
 }

 for(i=0;i<MAX;++i){
	printf("%.2f\n",myNumbers[i]);
 }
 
 fclose(fp);
 printf("\n");
 return 0;
}

