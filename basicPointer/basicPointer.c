#include <stdio.h>

// create int variable
// create pointer that's pointed at it
// print address
// print value at address

void main(){
    int num = 3;
    int *pnum = &num;
    int x = *pnum;

    printf("address of num: %p\n",&num);
    printf("address of pointer \'num\': %p\n",(void*)&pnum); // this will show the address that pnum occupies. It will NOT show the address contained in pnum
    printf("value of num: %d", num);
    printf("value of pointer: %p", pnum); // this will show the address contained in pnum. It will display in hex.
    printf("value at address of pointer: %d", x);


    int pointed = 5;
    int *ppointer = &pointed;

    printf("Value of int pointed is %d\n", pointed);
    printf("Address of int pointed as stored in ppointer is %p\n", ppointer);
    printf("Address of memory allocated for int pointed is %p\n", &pointed);
    printf("Address of memory allocated for pointer ppointer is %p\n", &ppointer);

    pointed = pointed * pointed;
    printf("Value at address of pointed is %d\n", *ppointer);
}