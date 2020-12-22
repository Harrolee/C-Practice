#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct pnames {
    char * first;
    char * last;
};

void main(){
    // declare struct
    struct pnames orc;

    // allocate memory for each char pointer in orc:
    // allocate memory with calloc()
    orc->first = (char *) calloc(10, sizeof(char));
    // allocate memory based upon user input with malloc()
    int temp;
    printf("how many characters in last name?");
    scanf("%d", &temp);
    orc -> last = (char *) malloc(temp * sizeof(char)+1); // add one to accomodate the null character

    // Use strcopy to populate each char pointer
    strcpy(orc->first, "Rognar");
    strcpy(orc->last, "RedFist");

    printf("Orc's name is %s %s",orc->first,orc->last);
}