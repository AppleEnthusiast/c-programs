#include <stdio.h>
#include <string.h>

void removeNewLine(char *);

int main(void) {
    FILE *fp = NULL;
    char msg[100] = "";

    fp = fopen("messages.txt", "w");
    if (fp == NULL) {
        printf("File error\n");
        return 1;
    }
 
    printf("Enter your message: ");
    if (fgets(msg, sizeof msg, stdin)) {
        removeNewLine(msg);
        fprintf(fp, "%s\n", msg);
    }

    printf("\nYour message was saved:\n%s\n", msg);

    fclose(fp);
    return 0;
}

void removeNewLine(char *message) {
    for (char *p = message; *p; ++p) {
        if (*p == '\n') {
            *p = '\0';
            break;
        }
    }
}

