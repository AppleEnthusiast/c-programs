#include <stdio.h>

int main(void){
 
 char name[] = {"Teoman"};
 int age = 56;

 // %-25s for left alignment
 printf("%25s\n",name);
 printf("%25d",age); 
 printf("\n");
 return 0;
}
