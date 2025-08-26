#include <stdio.h>
#include <string.h>

struct Student {
 char name[50];
 int age;
 float grade;
}
int main(void){
 struct Student student1;

 printf("Enter student's name: ");
 fgets(student1.name, 50, stdin);

 printf("\n");
 return 0;
}

