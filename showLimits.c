#include <stdio.h>
#include <limits.h>

void showMenu();

int main(void) {
    showMenu();
    printf("\n");
    return 0;
}

void showMenu() {
    printf("This program shows the limits of different number types.\n");
    printf("Which data type limits would you like to see?\n");
    printf("-------------------------------------------------\n");	
    printf("(a) short\n");	
    printf("(b) int\n");	
    printf("(c) long\n");	
    printf("-------------------------------------------------\n");	

    char choice = '\0';
    scanf("%c", &choice);

    if (choice == 'a') {
        printf("You selected: short");
    } else if (choice == 'b') {
        printf("You selected: int");
    } else if (choice == 'c') {
        printf("You selected: long");
    } else {
        printf("Invalid option");
    }
}

