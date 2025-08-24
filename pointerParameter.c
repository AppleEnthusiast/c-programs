#include <stdio.h>

void hasBirthday(int *, char *);

int main(void){
 int age = 56;
 char name[] = "Teo";
 
 printf("%s is %d years old.\n", name, age);

 hasBirthday(&age, name);
 printf("You are now %d years old, %s.\n",age, name);

 printf("\n");
 return 0;
}
void hasBirthday(int * age, char * name){
 printf("Now it is %s's birthday.\nHappy birthday, %s!\n",name, name);
 *age = *age + 1;
}
