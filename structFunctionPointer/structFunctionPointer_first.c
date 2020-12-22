#include <stdlib.h>
#include <stdio.h>

// using pointers with structures and functions

// create a structure pointer with given members

// create a readItem function that takes a struct pointer as an arg

// create a printItem function that prints readItem

// declare an item and initialize a pointer to the item in main
    // pass item pointer into read and print functions

struct item {
    char *itemName;
    int quantity;
    float price;
    float amount;
};


// no need to return anything.
// this function alters values at the address passed in
void readItem(struct item *pitem){
    printf("Name\n");
    scanf("%s", pitem->itemName);
    printf("Quantity\n");
                // need to use & here
                // we need to store input at the address passed into scanf
                // we don't use the ampersand above because pitem->itemname returns an address
                    //  'pitem->' gets the value stored at the address stored in pitem for whatever follows '->'
                    //  In this case, itemName follows '->'. itemName is a pointer. It's value is an address
                        //  I am still foggy on what is stored at itemName's address. 
                            //  Is it an entire array of characters? Does itemName automatically iterate? Research further.  
    scanf("%d", &pitem->quantity);
    printf("Price\n");
    scanf("%f", &pitem->price);
    pitem->amount = pitem->quantity * pitem->price;
}

void printItem(struct item *pitem)
{
    printf("Info about %s:\nQuantity: %d\tPrice: %f\tAmount: %f",pitem->itemName,pitem->quantity,pitem->price,pitem->amount);
};

void main(){
    // declare item and initialize a pointer here
    struct item bakedGood;
    struct item *pbakedGood;
    pbakedGood = &bakedGood;

    pbakedGood -> itemName = (char*) malloc(4 * sizeof(char));
    printf("here");
    // check that the program allocated memory:
    if(!pbakedGood){
        exit(-1);
    }

    readItem(pbakedGood);
    printItem(pbakedGood);

    free(pbakedGood -> itemName);
}

// declare struct
// declare struct pointer
// assign address of struct to struct pointer
// allocate memory for everything that needs memory allocated
// pass struct pointer rather than the struct into a function. 