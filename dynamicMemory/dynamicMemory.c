#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// allocate memory with malloc, calloc, and realloc

/* malloc:
    function that takes a size and returns a memory address.
        it reserves a block of memory as large as the number passed into it.
        it returns the address at the beginning of the block of memory.
    We store the memory address in a pointer.

    Sometimes this will fail.
        It will return NULL if malloc is unable to complete the programmer's request.
        Check that malloc succeeded after using it.
*/

/* calloc:
    as malloc, we reserve memory on the heap and return the start address of the block reserved.
    unlike malloc, calloc takes two arguments: 1) number of sub-blocks to reserve 2) size that each sub-block should take
*/

/* realloc:
    takes two arguments: 1) the address of a previous allocation 2) the new size in bytes
    returns: the new address in memory where the reserved block begins
    Realloc does something really cool. 
        1. It reserves a new block of memory of the new size 
        2. It finds the contents of the memory block at the address provided via argument
        3. It copies the contents from #1 to the new location.
        4. It returns the address of the new block as a void pointer
    Like malloc and calloc, realloc will return NULL if it fails.
*/

void exampleStringOperation(char * string){
    int len = strlen(string);
    // allocate memory for a server name.
    char * pServerName = (char *) calloc(len,sizeof(char));
    if(!pServerName){
        perror("unable to allocate memory for pServerName");
    }
    strncpy(pServerName, string, len);
    
    printf("address of server name in memory: %p\t",pServerName); 
    printf("server name: %s\n", pServerName);
    // append a .com to the server name.
    pServerName = (char *) realloc(pServerName,len + 5); //.com contains four ascii characters and one null terminator
    if(!pServerName){
        perror("unable to allocate memory for pServerName");
    }
    strcat(pServerName, ".com");
    printf("new address of pServerName: %u\t new server name: %s", pServerName, pServerName);

    free(pServerName);
}


int main(){
    exampleStringOperation("ricola");

    // malloc:
    int *pInt = (int*) malloc(sizeof(int) * 50);
    if(pInt = NULL){
        printf("Abort. Could not allocate memory as requested in Line 24.");
    } 
    free(pInt);
    // recall that arrays are pointers under the hood. Above, we allocate memory on the heap for 50 integers.
    // below, we allocate memory for 50 integers on the stack:
    int arrInt[50]; 
    // after calloc and realloc, revisit the process for traversing contiguous memory addresses.
    /*



    */

   // calloc:
    double *pdouble = (double*)calloc(20,sizeof(double));
    if(!pdouble){
        printf("Abort! Calloc failed on line 39");
    }

    free(pdouble);
   // release memory after you're finished using it.

   // realloc:
    pInt = (int *) realloc(pInt,sizeof(int)*100);
    free(pInt);
    return 0;
}