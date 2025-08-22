#include <stdio.h>

int main(void){
 
 double price = 89.99;
 double *ptrPrice = &price;

 printf("%12.2f\n",price);

 if(ptrPrice != NULL){
	*ptrPrice = 109.89;
	printf("%12.2f\n",*ptrPrice);
 }
 printf("\n");	
 return 0;
}
