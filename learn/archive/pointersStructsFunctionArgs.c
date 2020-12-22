#include <stdlib.h>
#include <stdio.h>
#include <string.h>

// pointers to structures as function arguments:



struct pPlayers {
    int * year;
    int * height;
};

int findYear(struct pPlayers *player){
    return (int) (player -> year);
}

void main(){
    struct pPlayers *Donatello;
    // allocate memory
    Donatello -> year = (int *) malloc(4 * sizeof(int));
    // assign values
    Donatello -> year = (int) 1980;

    printf("year is %d",findYear(Donatello));
}