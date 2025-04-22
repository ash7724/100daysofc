//From https://www.programiz.com/c-programming/examples
//63. C Program to Write a Sentence to a File
#include <stdio.h>
#include <stdlib.h>

int main() {
    char sentence[]={" Hello there welcome to VSCODE C demo"};
    int i;
    // creating file pointer to work with files
    FILE *fptr;

    // opening file in writing mode
    fptr = fopen("program.txt", "w");

    // exiting program 
    if (fptr == NULL) {
        printf("Error!");
        exit(1);
    }
    //Writing into File
    fprintf(fptr, "%s", sentence);


    fclose(fptr);
    return 0;
}
