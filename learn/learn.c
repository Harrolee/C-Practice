#include <stdlib.h>
#include <stdio.h>

void main(){
    FILE *fp;
    fpos_t fpos;
    int numLetters = 5;
    char stringHolder[numLetters];

    fp = fopen("test.txt","r");
    if(!fp){
        perror("Error opening file");
        exit(-1);
    }

   if((fseek(fp,3,SEEK_SET))==-1){
        perror("Error setting position");
        exit(-1);
   }
    fgets(stringHolder,numLetters,fp);
    printf("%s\n",stringHolder);

    if((fgetpos(fp,&fpos))==-1){
        perror("Error getting position");
        exit(-1);
    }
    printf("curr position is: %lu\n",fpos);

    fpos = 2;
    printf("(testing setting fpos with fpos = 2) curr position is: %lu\n",fpos);

    if((fsetpos(fp,&fpos))==-1){
        perror("Error getting position");
        exit(-1);
    }

    fgets(stringHolder,numLetters,fp);
    
    printf("letters at %lu are %s",fpos,stringHolder);

}









    // long location;
    // FILE *fp;
    // fp = fopen("test.txt","r");

    // if(fp == NULL){
    //     perror("Error reading file");
    // }
    // fseek(fp,2,SEEK_SET);

    // location = ftell(fp);

    // int numLetters = 5;
    // char letters[numLetters];
    // fgets(letters,numLetters,fp);

    // fclose(fp);
    // fp=NULL;
    
    // printf("%s",letters);