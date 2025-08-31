#include <stdio.h>
#include <string.h>

void removeNewLine(char *);

int main(void) {

    char msg[3][100];
    FILE * fp = NULL;

    fp = fopen("messages.txt", "w");
    if (fp == NULL) {
        printf("File error\n");
        return 1;
    }

    int i = 0;
    for (i = 0; i < 3; ++i) {
        printf("Please enter your message number %d: ", i + 1);
        if (fgets(msg[i], sizeof msg, stdin)) {
            removeNewLine(msg[i]); 
            fprintf(fp, "%s\n", msg[i]);    
        }
    }
 
    printf("Your messages have been recorded. Thank you.");
    fclose(fp);
    printf("\n");
    return 0;
}

void removeNewLine(char * msg) {
    for (char* p = msg; *p; ++p) {
        if (*p == '\n') {
            *p = '\0';
            break;    
        }
    } 
}

