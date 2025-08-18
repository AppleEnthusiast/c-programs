#include <stdio.h>

#define MAX 5

int main(void){

 int numbers[MAX] = {12, 3, 4, 5, 2};
 int sum = 0;

 for(int i = 0; i < MAX; i++){
	printf("%3d", numbers[i]);
	sum += numbers[i];
 } 
 printf("\n");
 printf("Sum: %d", sum);
 printf("\n");
 return 0;
}
