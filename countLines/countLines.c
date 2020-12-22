#include <stdlib.h>
#include <stdio.h>

// count number of lines in a file
    //  traverse the file and count the number of new line characters found

void main(){
    //  file stream
    int lineCount;
    char c;

    FILE *stream;
    stream = fopen("test.txt","r");

    while((c=fgetc(stream))!=EOF){
        if(c=='\n'){
            lineCount++;
        }
    }
    printf("%d",lineCount);
    // fgetc to traverse file
        //  check each char from fgetc for \n (this is the newline character. It is stored in one character.)
        //  last value in file will be \0. Stop there.
    // print count of newline chars

    fclose(stream);
    stream = NULL;
}