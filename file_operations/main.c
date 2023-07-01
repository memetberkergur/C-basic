#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_CHARACTER 100000

void cleanTerminal();


int main(int argc, char const *argv[])
{
    cleanTerminal();
    char *kelime;
    int counter=0;

    FILE *fptr;

    // Open a file in read mode
    fptr = fopen("sample.txt", "r");

    // Store the content of the file
    char myString[MAX_CHARACTER];


    // Read the content and store it inside myString
    fgets(myString,MAX_CHARACTER , fptr);

    // Print the file content
    printf("%s", myString);

    kelime = strtok(myString," ");
    while (kelime != NULL)
    {
        //printf("\n%s",kelime);
        kelime = strtok(NULL," ");
        counter++;
    }

    // Print the word counter
    printf("\n\nThis text has %d word\n",counter);
    
    // Close the file
    fclose(fptr);

    return 0;
}

void cleanTerminal(){
    char command[4] = "cls";
    system(command);
}