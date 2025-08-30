#include <stdio.h>
#include <string.h>

int main(void) {
    FILE *fp = NULL;
    char names[3][50] = {"Teoman", "Teo", "King Teo"};
    int i = 0;

    fp = fopen("temp.txt", "w");  // besser mit Dateiendung

    if (fp == NULL) {
        printf("File error\n");
        return 1;
    }

    for (i = 0; i < 3; ++i) {
        fprintf(fp, "%s\n", names[i]);
    }

    fclose(fp);   // Datei wieder schließen!
    printf("Names written to file.\n");

    return 0;
}

