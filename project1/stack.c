/**
*   Name:       Kyle Colantonio
*   CSUID:      2595744
*   Date:       10-MAR-2016
*   Project 1:  Buffer Overflow exploration
                (vulnerable program)
*
*   UPDATED:    06-MAR-2016
**/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int bof(char *str) {
    char buffer[24];

    /* The following statement causes a Buffer Overflow. */ 
    strcpy(buffer, str);

    return 1;
}

int main(int argc, char **argv) {
    char str[517];
    FILE *badfile;

    badfile = fopen("badfile", "r");
    fread(str, sizeof(char), 517, badfile);
    
    /* Call our valnerable function */
    bof(str);

    fprintf(stdout, "Returned Properly\n");
    return EXIT_SUCCESS;
}
