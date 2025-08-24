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
    scanf(" %c", &choice);   // with space to ignore '\n' in buffer

    if (choice == 'a') {
        printf("You selected: short\n");
        printf("signed: %d / %d\n", SHRT_MIN, SHRT_MAX);
        printf("unsigned: 0 / %u\n", USHRT_MAX);
    } else if (choice == 'b') {
        printf("You selected: int\n");
        printf("signed: %d / %d\n", INT_MIN, INT_MAX);
        printf("unsigned: 0 / %u\n", UINT_MAX);
    } else if (choice == 'c') {
        printf("You selected: long\n");
        printf("signed: %ld / %ld\n", LONG_MIN, LONG_MAX);
        printf("unsigned: 0 / %lu\n", ULONG_MAX);
    } else {
        printf("Invalid option\n");
    }
}

