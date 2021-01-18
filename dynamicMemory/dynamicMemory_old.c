#include <stdlib.h>
#include <stdio.h>

void main(){
    // ask user for number of letters
    // ask user for word
    // dynamically allocate memory based upon user's requrest
    // store and print user's word
    // free data

    int elementCount;
    char *str = NULL;

    printf("Hey, how many letters should I prep?");
    scanf("%d", &elementCount);
    str = (char *) calloc(elementCount,sizeof(char));
    printf("What should I store?");
    if(str){
        scanf("%s",str);
                    // don't need to dereference str when using a character pointer.
                    // I would dereference a pointer when getting a value from it.
                    // I can't assign data to an array. A character pointer IS an array.
        printf("%s", str);
    }
    else{
        printf("Couldn't allocate memory correctly");
    }

    free(str);
}