#include <stdio.h>
#include <string.h>
    // Reading in a value from cmd line 

// void constantValue(){
//     short shortNum = 67;
//     short testInt = 0;
//     // this creates a pointer that cannot be used to edit the value stored at its address.
//     const short *pnum = &shortNum;
    
//     // this will work
//     shortNum = 66;
//     // this will not work. We cannot change the value after defining *pnum as a constant.
//     *pnum = 66;

//     // we can change the address stored in *pnum
//     pnum = &testInt;
//     // notice, however, that the value at the new address cannot be changed.
//     *pnum = 25;
// }

// void constantAddress(){
//     int num = 27;
//     int testNum = 50;
//     // this creates a pointer whose address cannot be edited
//     int *const pnum = &num;

//     // this will not work. note the error: "this creates a pointer whose address cannot be edited"
//     pnum = NULL;
// }

void voidPointer(){
    // can use a pointer of type void to store addresses of different types.
    int num = 5;
    char k = 'k';
    _Bool ya = 1;
    void *vpointer;

    // must tell printf how to handle the value pointed to by the pointer. We do this by casting the value to a type.
    vpointer = &ya;
    printf("I'll have %d ice cream\n", *(_Bool *)vpointer);
    vpointer = &k;
    printf(" ice cream was %c", *(char*)vpointer);
}

void pointerArray(){
    int arr[50];
    int *parr = arr;
    //parr = &arr;

    arr[0] = 3;
    *(parr + 1) = 5;
    printf("array notation at 0: %d\t pointer notation at 1: %d\n",arr[0],*(parr + 1));
    *(parr + 2) += *(parr);
    printf("new value at 2: %d", *(parr + 2));
}

void pointerArithmetic1(){
    char string[] = "a string";
    // pointing directly at string[0]
    char *pointer = string; 
    int i = 0;

    // iterate through array with pointer
    while(i < strlen(string)){
        // display location (address) of memory
        // display value at that location
                                                                        // How do I get the address that a pointer points to? A: Don't dereference it. The address that a pointer points to is held as its value. 
        printf("Address of pointer: %d \t Address of element in arr: %d\n",pointer, &string[i]);
        printf("Value of pointer: %c \t Value of element in arr: %c\n",*pointer, string[i]);
        i++;
        // here we increment the pointer.
        pointer++;
    }
/* output:
Address of pointer: 000000000061FDCB     Address of element in arr: 000000000061FDCB
Value of pointer: a      Value of element in arr: a
Address of pointer: 000000000061FDCC     Address of element in arr: 000000000061FDCC
Value of pointer:        Value of element in arr:
Address of pointer: 000000000061FDCD     Address of element in arr: 000000000061FDCD
Value of pointer: s      Value of element in arr: s
Address of pointer: 000000000061FDCE     Address of element in arr: 000000000061FDCE
Value of pointer: t      Value of element in arr: t
Address of pointer: 000000000061FDCF     Address of element in arr: 000000000061FDCF
Value of pointer: r      Value of element in arr: r
Address of pointer: 000000000061FDD0     Address of element in arr: 000000000061FDD0
Value of pointer: i      Value of element in arr: i
Address of pointer: 000000000061FDD1     Address of element in arr: 000000000061FDD1
Value of pointer: n      Value of element in arr: n
Address of pointer: 000000000061FDD2     Address of element in arr: 000000000061FDD2
Value of pointer: g      Value of element in arr: g
*/
}

void pointerArithmetic2(){
    long num[] = {5l,10l,20l,40l};
                // note that we don't want to assign the value of *pnum to the address of num (&num).
    long *pnum = num;
    int i;
            // We only want to try to access values that are inside the array. We need and end.
            // Our end is the total size of the array in bits divided by the size of one portion of the array.
    while(i < sizeof(num) / (sizeof(num[0]))){
                                    // I want to demonstrate memory changes and it is easier to do it as an unsigned long than as a hex
        printf("Address at num[%i]: %llu \t Value at num[%i]: %d\n", i, (unsigned long)(pnum + i), i, *(pnum + i));
        i++;
    }

    /*      Output:
            Note that the address value increases by 4. Long has a byte size of 4.
            Address at num[0]: 6421968       Value at num[0]: 5
            Address at num[1]: 6421972       Value at num[1]: 10
            Address at num[2]: 6421976       Value at num[2]: 20
            Address at num[3]: 6421980       Value at num[3]: 40
    */
}

void main(){
    // make value access safer with constants:
    // constantValue();
    // constantAddress();

    // generic pointer type
    // voidPointer();
    // pointerArray();
    //pointerArithmetic1();

    pointerArithmetic2();






    // printf("input an int\n");
    // scanf("%d", pnum);
    // printf("That was %d. Please provide another value", num1);


    /*
        Note that we use >> scanf("%d", pnum); << and not >>  scanf("%d", *pnum); <<
                                        ^^ We do not use the star. The star accesses the address value of pnum.
        We want to store the value given by scanf at the address stored in pnum. 
        When we prefix *, we try to store the input value as the value of *pnum. The value of *pnum is an address stored in hex format. Passing an int into that will cause the program to pause. 
    */

}