#include <stdio.h>
#include <string.h>

struct Student {
 char name[50];
 int age;
 float grade;
};
int main(void){
 struct Student student1;

 printf("Enter student's name: ");
 fgets(student1.name, sizeof(student1.name), stdin);
 student1.name[strcspn(student1.name,"\n")] = '\0';
 printf("Student 1: %s",student1.name);

 printf("\n");
 return 0;
}

