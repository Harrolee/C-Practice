#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void main(){

    //printf("char is %lu bytes large", sizeof(char));

    // init pointer to contain a string
    char *str = NULL;

    // allocate memory for string
    str = (char *) malloc(15);
    // try to put 5 characters in
    strcpy(str, "fifth");
    printf("string: %s\taddress: %p\tmemory allocated: %zu\n",str,str,sizeof(str));

    // reallocate more
    str = (char *) realloc(str,25);
    strcat(str, " element");
    printf("string: %s\taddress: %p\tmemory allocated: %zu",str,str,sizeof(str));

    free(str);
}