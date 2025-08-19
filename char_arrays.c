#include <stdio.h>
#include <string.h>

int main(void){

 char str1[100];
 char str2[100];

 strcpy(str1,"Teo, du bist spitze!");
 strcpy(str2,"Du bist allen anderen ueberlegen!");

 printf("%s\n",str1);
 printf("%s\n",str2);

 printf("\n");
 return 0;
}
