#include <stdio.h>
#include <stdlib.h>

void main(){
    FILE *fp;
    char c;

    fp = fopen("forward.txt","r");
    if(!fp){
        perror("Error reading file");
    }

    fseek(fp,0,SEEK_END);
    long pos = ftell(fp);
    int i = 0;
    while (i<pos)
    { //ftell(fp)!=0
        printf("%c",fgetc(fp));
        fseek(fp,-i,SEEK_END);
        //printf("%lu",ftell(fp));
        i++;
    }
    
    fclose(fp);
    fp=NULL;
}