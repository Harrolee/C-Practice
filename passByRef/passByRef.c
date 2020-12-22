#include <stdio.h>
// function will square the number passed into it.

void squareNumber(int *const pnum){
    // I want to set the value at pnum's address equal to dereferenced pnum times itself
    *pnum = *pnum * *pnum;
}

void main(){
    int num;
    
    printf("I'll square the number you type\n");
    scanf("%d",&num);
    squareNumber(&num);
    printf("%d", num);

}