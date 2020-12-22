#include <stdio.h>
#include <stdlib.h>

void main(){
    int userNumber, programNumber;
    int max = 5;
    // generate number
    programNumber = rand() % 20 + 1;

    for(int i = 0; i < max; i++){
        // Get user's number
        printf("Guess a number between 1 and 20\n");
        scanf("%d",&userNumber);

        // validate the number
        if (userNumber>programNumber){
            printf("Lower\n");
        }
        else if (userNumber<programNumber){
            printf("Higher\n");
        }
        else{
            printf("Congrats! You're right!");
            break;
        }

        if(i==4){
            printf("Better luck next time");
        }
    }




}