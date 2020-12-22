#include <stdio.h>

int stringLength(const char *string){
    // find length of string by subtracting first address from last address
    const char *pointer = string;
    // traverse the array to get to the last address
    while(*pointer){   
        pointer++;
    }
    printf("first address: %p \t final address: %p\n", string, pointer);
    // I expect the difference of these addresses to be a value that I can contain in an int.
    return pointer - string;
}

void main(){
    char string[] = {"How long am I"};
    printf("String is %d chars long",stringLength(string));
}