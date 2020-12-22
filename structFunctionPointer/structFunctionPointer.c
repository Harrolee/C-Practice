// declare struct of pointers
    // contains char pointer array, int, and float

// create function that takes a pointer to a struct and manipulates members of that struct

// create function that takes a pointer to a struct and prints the members of that struct

// In main, define a pointer that stores the address of the struct of pointers
// Pass that pointer into the function that can manipulate the OG

#include <stdlib.h>
#include <stdio.h>

struct product {
    char *name;
    int count;
    float cost;
    float totalCost;
};

void readItem(struct product *pitem){
    printf("Name\n");
    scanf("%s",pitem->name);
    printf("Count\n");
    scanf("%d",&pitem->count);
    printf("Cost\n");
    scanf("%f",&pitem->cost);
    pitem->totalCost = pitem->cost * pitem->count;
}

void printItem(struct product *pitem){
    printf("Name:%s\n",pitem->name);
    printf("Count: %d\tCost: %f\tValue: %f",pitem->count,pitem->cost,pitem->totalCost);
}

void main(){
    struct product walnut;
    struct product *pwalnut = &walnut;
    pwalnut->name = (char *) malloc(10 * sizeof(char));

    if(!pwalnut->name){
        printf("memory not allocated successfully");
        exit(-1);
    }
    readItem(pwalnut);
    printItem(pwalnut);

    free(pwalnut->name);
}