#include <stdlib.h>
#include <stdio.h>
#include <string.h>

// make file

void main(){
    // read a formatted file
    FILE *fp;
    char firstFourWords[4][10];

    fp = fopen("test.txt","w+");

    if(fp == NULL){
        perror("Error reading file");
    }

    fscanf(fp,firstFourWords[0],firstFourWords[1],firstFourWords[2],firstFourWords[3], "%s", "%s", "%s", "%s");
    if(firstFourWords[0]!=NULL){
        for(int i=0;i<4;i++){
            printf("%s ",firstFourWords[i]);
        }
    }

    fclose(fp);
    fp=NULL;
    








    // // read string from file
    // FILE *fp;
    // int strLength = 60;
    // //char *pstring;
    // char pstring[strLength];
    // //pstring = (char*) malloc(60);

    // fp = fopen("test.txt", "r");

    // if(fp == NULL){
    //     perror("Error reading file");
    // }

    // fgets(pstring,strLength,fp);
    // printf("%s", pstring);

    // fclose(fp);
    // fp = NULL;
    // //pstring = NULL;
    // free(pstring);




    // // read a char from a file:
    // FILE *fileToRead;
    // int endOfFileChar;

    // fileToRead = fopen("test.txt","r");

    // if(!fileToRead){
    //     perror("Error opening file");
    // }

    // while((endOfFileChar = fgetc(fileToRead)) != -1){
    //     printf("%c",endOfFileChar);
    // }

    // fclose(fileToRead);
    // fileToRead = NULL;



    // // create a file:
    // FILE *pfile = NULL;
    // //  make pointer to filename
    // char *filename = "myfile.txt";
    // //  assign address of FILE struct to pointer *pfile
    // pfile = fopen(filename,"w");
    // //  check that it worked. Address is not null if it worked
    // if(pfile!=NULL){
    //     printf("address of FILE struct is %p", pfile);
    // }
}