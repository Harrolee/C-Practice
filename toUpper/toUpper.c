#include <stdlib.h>
#include <stdio.h>
#include <string.h>
//  convert all lower values to upper
//  store new values in a new file
//  rename og file to og.old
//  rename new file to og name


void main(){
    //  file stuff
    FILE *fpOld;
    FILE *fpNew;
    //  naming stuff

    char oldName[25];
    char tempName[25] = "temp.txt";
    //  conversion stuff
    char c;

    fpOld = fopen("lower.txt","r");
    fpNew = fopen(tempName,"w");
    //  scrub file, replace lower chars with upper chars
    while((c=fgetc(fpOld))!=EOF){
        if(islower(c)){
            c-=32;
        }
        fputc(c,fpNew);
    }

    fclose(fpOld);
    fclose(fpNew);
    fpOld = NULL;
    fpNew = NULL;

    //  rename new function
    rename("newlower.txt",tempName);
    //  remove temp function
    remove("newlower.txt");
}