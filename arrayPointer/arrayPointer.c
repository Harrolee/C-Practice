#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main(){

    // traverse an array with a pointer
    char * pString = (char *)calloc(20,sizeof(char));
    if(!pString){
        perror("failed to allocate");
    }
    strcpy(pString,"hello array");
    printf("full string: %s\n", pString);
    printf( "first letter: %c\n",*pString );
    printf( "second letter: %c\n",*(pString+1) );


    free(pString);
    return 0;
}